#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72 , 45), target("Unknown")
{
    std::cout << "RobotomyRequestForm Constructor called !" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string string) : AForm("RobotomyRequestForm", 72 , 45), target(string)
{
    std::cout << "RobotomyRequestForm Constructor called !" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm  const &Robj) : AForm("RobotomyRequestForm", 72, 45), target(Robj.getTarget())
{
    std::cout << "RobotomyRequestForm copy Constructor called !" << std::endl;
    *this = Robj;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &Robj)
{
    std::cout << "RobotomyRequestForm copy assignment called !" << std::endl;
    if (this == &Robj)
        return *this;
    return *this;
}
std::string RobotomyRequestForm::getTarget() const 
{
    return (this->target);
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called !" << std::endl;
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const 
{
    (void) executor;
}