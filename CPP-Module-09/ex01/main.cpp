#include "RPN.hpp"
#include <iomanip>
int main (int ac , char **av)
{
    if (ac != 2){
        std::cerr << "Invalid number of Arguments" << std::endl;
        return 1;
    }
    try
    {      
        RPN o;
        o.solvePolish(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}