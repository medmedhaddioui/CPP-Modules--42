#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool isSigned;
        const int RequiredSign;
        const int RequiredExecute;
    public: 
        // Constructor
        Form(std::string name, int RequiredSign, int RequiredExecute);

        //getters
        std::string getName () const ;
        int getRequiredSign() const ;
        int getRequiredExecute() const ;
        bool getisSigned();

        // others;
        void GradeTooHighException() const ;
        void GradeTooLowException() const ;
        void beSigned(Bureaucrat &Bureaucrat);
};

std::ostream &operator<<(std::ostream &out, Form &obj);

#endif