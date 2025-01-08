#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
class AForm;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public: 
        Bureaucrat();  
        Bureaucrat(Bureaucrat const &Robj);
        Bureaucrat &operator=(Bureaucrat const &Robj);
        ~Bureaucrat ();  
        std::string getName () const ;
        int getGrade() const ;
        void incrementGrade();
        void decrementGrade();
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
        void signForm(AForm &form) ; 
        void executeForm(AForm const & form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj);
#endif