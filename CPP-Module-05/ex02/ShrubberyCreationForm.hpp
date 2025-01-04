#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM__HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private :
        const int sign;
        const int exec;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &Robj);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &Robj);
        ~ShrubberyCreationForm();
}
#endif