#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public: 
        Bureaucrat(std::string name, int grade);
        std::string getName () const ;
        int getGrade() const ;
        void incrementGrade();
        void decrementGrade();
        void GradeTooHighException();
        void GradeTooLowException();
        void SignForm();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &obj);

#endif