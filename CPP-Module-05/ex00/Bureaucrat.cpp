#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat (std::string name, int grade) : name (name), grade(grade)
{
    // try
    // {
    //     if (grade < 1 || grade > 150)
    //         throw std::exception();
    //     else
    //         this->grade = grade;
    // }
    // catch (const std::exception &e)
    // {
    //     if (grade < 1)
    //         GradeTooHighException();
    //     else
    //         GradeTooLowException();
    // }
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

}
void Bureaucrat::decrementGrade()
{

}

// insertion operator
std::ostream &operator<<(std::ostream &out,Bureaucrat &obj)
{
    out << obj.getName() << ", bureaucrat grade "  << obj.getGrade();
    return out;
}