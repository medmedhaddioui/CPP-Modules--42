#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Constructor called !" << std::endl;
}

Intern::Intern(Intern  const &Robj)
{
    std::cout << "Intern copy Constructor called !" << std::endl;
    *this = Robj;
}
Intern &Intern::operator=(Intern const &Robj)
{
    std::cout << "Intern copy assignment called !" << std::endl;
    if (this == &Robj)
        return *this;
    return *this;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called !" << std::endl;
}

AForm *Intern::ShrubberyForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::RobotomyForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm *Intern::PresidentialForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    AForm *(Intern::*FuncPtr[3]) (std::string) = {&Intern::ShrubberyForm , &Intern::RobotomyForm, &Intern::PresidentialForm};
    std::string strings[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
    int i = 0;
    while (i < 3 && name != strings[i])
         i++;
    if (i != 3)
        return ((this->*FuncPtr[i])(target));
    std::cerr << name << " cannot execute this " << target << std::endl;
    return NULL;
}