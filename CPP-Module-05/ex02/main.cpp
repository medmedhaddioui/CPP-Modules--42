#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main ()
{
    try
    {
        // Form Form;
        Bureaucrat a;
        a.incrementGrade();
        // a.signForm(Form);
        std::cout << a << std::endl;
        // std::cout << Form << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    // catch (Form::GradeTooHighException &e)
    // {
    //     std::cerr << "Exception caught: " << e.what() << std::endl;
    // }
    // catch (Form::GradeTooLowException &e)
    // {
    //     std::cerr << "Exception caught: " << e.what() << std::endl;
    // }

}