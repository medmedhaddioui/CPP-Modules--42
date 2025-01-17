#include "Form.hpp"

Form::Form() : name("CV"), isSigned(false), RequiredSign(122), RequiredExecute(15) 
{
    std::cout << "Form Constructor called !" << std::endl;
    if (this->RequiredSign < 1 ||  this->RequiredExecute < 1)
        throw Form::GradeTooHighException();
    if (this->RequiredSign > 150 || this->RequiredExecute > 150 )
        throw Form::GradeTooLowException();
}

Form::Form ( Form const &obj) : name ("CV"), isSigned(false), RequiredSign(122), RequiredExecute(15) 
{
    std::cout << "Form Copy Constructor called !" << std::endl;
    *this = obj;
}

Form &Form::operator=(Form const &obj)
{
    std::cout << "Form copy assignment Constructor called !" << std::endl;
    if (this == &obj)
        return *this;
    this->isSigned = obj.getisSigned();
    return *this;
}

Form::~Form()
{
    std::cout << "Form Destructor Called !" << std::endl;
}

bool Form::beSigned(Bureaucrat &Bureaucrat)
{
    if (Bureaucrat.getGrade() <= RequiredSign)
        isSigned = true;
    else
        throw Form::GradeTooLowException();
    return (getisSigned());
}

int Form::getRequiredSign() const 
{
    return (this->RequiredSign);
}

int Form::getRequiredExecute() const 
{
    return (this->RequiredExecute);
}
std::string Form::getName() const 
{
    return (this->name);
}
bool Form::getisSigned() const
{
    return (this->isSigned);
}
const char *Form::GradeTooHighException::what() const throw()
{
    return ("Form Grade too High !!");
}
const char *Form::GradeTooLowException::what() const throw()
{
    return ("Form Grade too Low !!");
}

std::ostream &operator << (std::ostream &out , Form &obj)
{
    out << obj.getName() << " with Required Sign: " << obj.getRequiredSign();
    out << " and Required Execute: " << obj.getRequiredExecute();
    out << " with status sign " << obj.getisSigned();
    return out;
}