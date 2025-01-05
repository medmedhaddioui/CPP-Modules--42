#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145 , 137) , target("Unknown_shrubbery")  
{
    std::cout << "ShrubberyCreationForm Constructor called !" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string string) : AForm("ShrubberyCreationForm", 145 , 137) , target(string + "_shrubbery")
{
    std::cout << "ShrubberyCreationForm Constructor called !" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm  const &Robj) : AForm("ShrubberyCreationForm", 145, 137), target(Robj.getTarget()) 
{
    std::cout << "ShrubberyCreationForm copy Constructor called !" << std::endl;
    *this = Robj;
}
std::string  ShrubberyCreationForm::getTarget() const 
{
    return (this->target);
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &Robj)
{
    std::cout << "ShrubberyCreationForm copy assignment called !" << std::endl;
    if (this == &Robj)
        return *this;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called !" << std::endl;
}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const 
{   
    AForm::execute(executor);
    std::ofstream File(target.c_str());
    File << "writes ASCII" << std::endl;
}