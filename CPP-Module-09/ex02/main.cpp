#include "PmergeMe.hpp"



int main (int ac , char **av)
{
    if (ac == 1)
        return 1;
    try
    {
        PmergeMe p;
        for (int i = 1; i < ac ; i++)
            p.checkValidArgs(av[i]);
        p.MergeInsertAlgorithm();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
