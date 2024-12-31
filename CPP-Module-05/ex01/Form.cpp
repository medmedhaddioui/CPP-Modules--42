#include "Form.hpp"

Form::Form(std::string name, int RequiredSign, int RequiredExecute) : name(name) , 
RequiredSign(RequiredSign) , RequiredExecute (RequiredExecute) , isSigned(false)
{
    try
    {
        if (this->RequiredSign < 1 || this->RequiredSign > 150 || this->RequiredExecute < 1 || this->RequiredExecute > 150)
            throw std::exception();
    }
    catch(const std::exception& e)
    {
        if (this->RequiredSign < 1 || this->RequiredExecute < 1)
            GradeTooHighException();
        else
            GradeTooLowException();
    }
};

// void Form::signForm() const 
// {
//     if (isSigned)
//         std::cout << 
// }

void Form::beSigned(Bureaucrat &Bureaucrat)
{
    try 
    {
        if (Bureaucrat.getGrade() > RequiredSign)
            throw std::exception();
        else
            isSigned = true;
    }
    catch (const std::exception &e)
    {
        Form::GradeTooLowException();
    }
}
void Form::GradeTooHighException() const 
{
    std::cerr << "Grade Too High" << std::endl;
}
void Form::GradeTooLowException() const 
{
    std::cerr << "Grade Too Low" << std::endl;
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
bool Form::getisSigned()
{
    return (this->isSigned);
}

std::ostream &operator << (std::ostream &out , Form &obj)
{
    out << obj.getName(); // continue
    return out;
}