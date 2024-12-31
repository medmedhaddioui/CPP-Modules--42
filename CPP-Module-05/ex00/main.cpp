#include "Bureaucrat.hpp"

int main ()
{
    Bureaucrat office ("San",150);
    office.decrementGrade();
    std::cout << office << std::endl;   
}