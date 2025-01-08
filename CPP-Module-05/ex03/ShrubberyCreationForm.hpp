#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "fstream"

class ShrubberyCreationForm : public AForm
{
    private:
        const std::string target;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string string);
        ShrubberyCreationForm( ShrubberyCreationForm  const &Robj);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &Robj);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const ;
        std::string getTarget() const ;
};
#endif