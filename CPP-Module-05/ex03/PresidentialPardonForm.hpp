#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        const std::string target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string string);
        PresidentialPardonForm(PresidentialPardonForm  const &Robj);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &Robj);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const ;
        std::string getTarget() const ; 
};
#endif