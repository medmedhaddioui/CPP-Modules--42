// #include "Bureaucrat.hpp"
// #include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
int main ()
{
    try 
    {
        Bureaucrat bure;
        ShrubberyCreationForm obj("Home");
        bure.signForm(obj);
        bure.executeForm(obj);
    }
    catch  (AForm::NotSignedException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch  (AForm::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch  (AForm::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
}