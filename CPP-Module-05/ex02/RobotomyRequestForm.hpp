#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        const std::string target;
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string string);
        RobotomyRequestForm(RobotomyRequestForm  const &Robj);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &Robj);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const ;
        std::string getTarget() const ;
};
#endif