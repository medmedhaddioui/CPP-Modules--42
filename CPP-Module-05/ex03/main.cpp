#include "Intern.hpp"
#include "Bureaucrat.hpp"
int main ()
{
    try 
    {
        Bureaucrat bure;
        AForm* rrf;
        Intern someRandomIntern;
        rrf = someRandomIntern.makeForm("Robotomsy Request", "Bender");
        if (!rrf)
            return 0;
        rrf->beSigned(bure);
        rrf->execute(bure);
        delete rrf;
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