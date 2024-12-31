#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat (std::string name, int grade) : name(name), grade(grade)
{
    try
    {
        if (this->grade < 1 || this->grade > 150)
            throw std::exception();
    }
    catch (const std::exception &e)
    {
        if (this->grade < 1)
            GradeTooHighException();
        else
            GradeTooLowException();
    }
}

void Bureaucrat::GradeTooHighException()
{
    std::cerr << "Grade Too High" << std::endl;
}
void Bureaucrat::GradeTooLowException()
{
    std::cerr << "Grade Too Low" << std::endl;
}
std::string Bureaucrat::getName() const 
{
    return (this->name);
}
int Bureaucrat::getGrade() const 
{
    return (this->grade);
}
void Bureaucrat::incrementGrade()
{
    try
    {
        grade--;
        if (grade < 0)
            throw std::exception();
    }
    catch(const std::exception& e)
    {
        Bureaucrat::GradeTooHighException();
    }    
}
void Bureaucrat::decrementGrade()
{
    try
    {
        grade++;
        if (grade > 150)
            throw std::exception();
    }
    catch(const std::exception& e)
    {
        Bureaucrat::GradeTooLowException();
    }
}

// insertion operator
std::ostream &operator<<(std::ostream &out,Bureaucrat &obj)
{
    out << obj.getName() << ", bureaucrat grade "  << obj.getGrade();
    return out;
}
void Bureaucrat::SignForm() 
{
    form.beSigned(*this);
    // if (form.getisSigned())
}