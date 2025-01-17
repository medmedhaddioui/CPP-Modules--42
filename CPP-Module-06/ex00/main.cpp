#include "ScalarConverter.hpp"


int main (int ac , char **av)
{
    if (ac == 1)
        return 1;
    for (int i = 1 ; i < ac ; i++)
        ScalarConverter::convert(av[i]);
}