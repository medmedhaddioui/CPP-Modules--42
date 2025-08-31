#include "PmergeMe.hpp"

int main (int ac , char **av)
{
    if (ac == 1)
        return 1;
    try
    {
        PmergeMe p(av);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}