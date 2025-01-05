#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25 , 5), target("Unknown")
{
    std::cout << "PresidentialPardonForm Constructor called !" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string string) : AForm("PresidentialPardonForm", 25 , 5) , target(string) 
{
    std::cout << "PresidentialPardonForm Constructor called !" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm  const &Robj) : AForm("PresidentialPardonForm", 25, 5), target(Robj.getTarget())
{
    std::cout << "PresidentialPardonForm copy Constructor called !" << std::endl;
    *this = Robj;
}
std::string PresidentialPardonForm::getTarget() const 
{
    return (this->target);
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &Robj)
{
    std::cout << "PresidentialPardonForm copy assignment called !" << std::endl;
    if (this == &Robj)
        return *this;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called !" << std::endl;
}
void PresidentialPardonForm::execute(Bureaucrat const &executor) const 
{
    (void) executor;
}