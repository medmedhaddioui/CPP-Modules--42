#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        Bureaucrat a;
        a.incrementGrade();
        std::cout << a << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
}