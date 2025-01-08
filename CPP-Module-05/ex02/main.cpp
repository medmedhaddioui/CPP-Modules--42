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
    // try
    // {
    //     // Form Form;
    //     // Bureaucrat a;
    //     // a.incrementGrade();
    //     // // a.signForm(Form);
    //     // std::cout << a << std::endl;
    //     // std::cout << Form << std::endl;
    // }
    // catch (Bureaucrat::GradeTooHighException &e)
    // {
    //     std::cerr << "Exception caught: " << e.what() << std::endl;
    // }
    // catch (Bureaucrat::GradeTooLowException &e)
    // {
    //     std::cerr << "Exception caught: " << e.what() << std::endl;
    // }
    // catch (Form::GradeTooHighException &e)
    // {
    //     std::cerr << "Exception caught: " << e.what() << std::endl;
    // }
    // catch (Form::GradeTooLowException &e)
    // {
    //     std::cerr << "Exception caught: " << e.what() << std::endl;
    // }

}