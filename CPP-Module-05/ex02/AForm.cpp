#include "AForm.hpp"

AForm::AForm() : name("CV"), isSigned(false), RequiredSign(123), RequiredExecute(15) 
{
    std::cout << "AForm Constructor called !" << std::endl;
    if (this->RequiredSign < 1 ||  this->RequiredExecute < 1)
        throw AForm::GradeTooHighException();
    if (this->RequiredSign > 150 || this->RequiredExecute > 150 )
        throw AForm::GradeTooLowException();
}

AForm::AForm ( AForm const &obj) : name ("CV"), isSigned(false), RequiredSign(123), RequiredExecute(15) 
{
    std::cout << "AForm Copy Constructor called !" << std::endl;
    *this = obj;
}
AForm &AForm::operator=(AForm const &obj)
{
    std::cout << "AForm copy assignment Constructor called !" << std::endl;
    if (this == &obj)
        return *this;
    this->isSigned = obj.getisSigned();
    return *this;
}
AForm::~AForm()
{
    std::cout << "AForm Destructor Called !" << std::endl;
}

bool AForm::beSigned(Bureaucrat &Bureaucrat)
{
    if (Bureaucrat.getGrade() <= RequiredSign)
        isSigned = true;
    else
        throw AForm::GradeTooLowException();
    return (getisSigned());
}

int AForm::getRequiredSign() const 
{
    return (this->RequiredSign);
}

int AForm::getRequiredExecute() const 
{
    return (this->RequiredExecute);
}
std::string AForm::getName() const 
{
    return (this->name);
}
bool AForm::getisSigned() const
{
    return (this->isSigned);
}
const char *AForm::GradeTooHighException::what() const throw()
{
    return ("AForm Grade too High !!");
}
const char *AForm::GradeTooLowException::what() const throw()
{
    return ("AForm Grade too Low !!");
}

std::ostream &operator << (std::ostream &out , AForm &obj)
{
    out << obj.getName() << " with Required Sign: " << obj.getRequiredSign();
    out << " and Required Execute: " << obj.getRequiredExecute();
    out << " with status sign " << obj.getisSigned();
    return out;
}