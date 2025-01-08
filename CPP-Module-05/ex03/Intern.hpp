#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
class Intern
{
    public:
        Intern();
        Intern (Intern const &Robj);
        Intern &operator=(Intern const &Robj);
        ~Intern();

        AForm* ShrubberyForm(std::string target);
        AForm *RobotomyForm(std::string target);
        AForm *PresidentialForm(std::string target);
        AForm *makeForm(std::string name , std::string target);
};
#endif