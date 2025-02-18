#include "BitcoinExchange.hpp"

void parse (const char *filename)
{
    std::fstream inputFile(filename);
    if (!inputFile.is_open()){
        std::cerr << "Error wrong inputFile" << std::endl;
        return ;
    }
    std::string line ;
    std::getline(inputFile, line);
    std::getline(inputFile, line);
    std::cout << line << std::endl;
}