#include "ScalarConverter.hpp"


int main (int ac , char **av)
{
    for (int i = 0 ; i < ac ; i++)
        ScalarConverter::convert(av[i]);
}