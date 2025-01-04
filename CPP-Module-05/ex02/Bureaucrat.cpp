#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat (void) : name("Mark") , grade(20)
{
    std::cout << "Default Bureaucrat Constructor called !" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &Robj) : name ("Mark"), grade(10)
{
    std::cout << "Bureaucrat copy Constructor called !" << std::endl;
    *this = Robj;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &Robj)
{
    std::cout << "Bureaucrat copy assignment Constructor called !" << std::endl;
    if (this == &Robj)
        return *this;
    this->grade = Robj.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called !" << std::endl;
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
    if ((grade - 1) < 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}
void Bureaucrat::decrementGrade()
{
    if ((grade + 1) > 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}
const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat Grade Too High !!");
}
const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat Grade Too Low !!");
}
void Bureaucrat::signForm(AForm &form)
{
    if (form.beSigned(*this) == true)
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    else
        std::cout << this->getName() << " couldn’t sign " << form.getName() << " Because of the requiredSign" << std::endl;
}
// insertion operator
std::ostream &operator<<(std::ostream &out,Bureaucrat &obj)
{
    out << obj.getName() << ", bureaucrat grade "  << obj.getGrade();
    return out;
}