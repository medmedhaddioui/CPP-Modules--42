#ifndef AForm_HPP
#define AForm_HPP

#include "Bureaucrat.hpp"

class AForm
{
    private:
        const std::string name;
        bool isSigned;
        const int RequiredSign;
        const int RequiredExecute;
    public: 
        // Constructor
        AForm();
        AForm (std::string name ,int Sign, int Exec); 
        AForm(AForm const &obj);
        AForm &operator=(AForm const &obj);
        ~AForm();

        //getters
        std::string getName () const ;
        int getRequiredSign() const ;
        int getRequiredExecute() const ;
        bool getisSigned() const ;

        // nested class
        class GradeTooHighException : public std::exception
        {
            public:
                const char * what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
           public:
                const char * what() const throw();
        };
        class NotSignedException : public std::exception 
        {
            public :
                const char * what() const throw();
        };
        // others;
        bool beSigned(Bureaucrat const &Bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, AForm &obj);

#endif