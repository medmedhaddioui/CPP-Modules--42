#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
    BitcoinExchange c;
    if (ac != 2){
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }
    try
    {
        c.readData();
        c.readInput(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}