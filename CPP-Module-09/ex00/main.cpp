#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
        return 1;
    parse(av[1]);
    std::map<std::string , std::string> c;
    c.insert(std::pair<std::string, std::string> ("banana", "two"));
    c.insert(std::pair<std::string, std::string> ("banana", "one"));
    std::cout << c["banana"] << std::endl;
}