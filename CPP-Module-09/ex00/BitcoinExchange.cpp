#include "BitcoinExchange.hpp"

void BitcoinExchange::SplitDateValue(std::string line, size_t limits)
{
    if (limits == std::string::npos ||  limits != 11 || line[limits - 1] != ' ')
        throw std::runtime_error("Error: bad input => ");
    std::string date;
    for (size_t i = 0; i < limits - 1; i++) 
    {
        if ((i == 4 && line[i] != '-' ) || (i == 7 && line[i] != '-'))
            throw std::runtime_error("Error: bad input => ");
        if (i != 4 && i != 7 && !std::isdigit(line[i]))
            throw std::runtime_error("Error: bad input => ");
        date.push_back(line[i]);
    }
    if (++limits != ' ')
        throw std::runtime_error("Error: bad input => ");
    while (limits < line.size())
    {
        if (line[limits] == '-')
            thorw
        std::stringstream holdValue;
        std::cout << line[limits];
    }
    std::cout << date << std::endl;
}
void BitcoinExchange::parse (const char *filename)
{
    std::fstream inputFile(filename);
    if (!inputFile.is_open()){
        std::cerr << "Error wrong inputFile" << std::endl;
        return ;
    }
    std::string line ;
    std::getline(inputFile, line);
    if (line != "date | value")
        std::cerr << "Error: input File must start with date | value" << std::endl;
    else
    while (std::getline(inputFile, line))
    {
        try
        {
            BitcoinExchange::SplitDateValue(line , line.find_first_of('|'));
        }
        catch(const std::exception& e)
        {
            if (e.what() == "Error: bad input => ")
                std::cerr << e.what() << line << std::endl;
            else
                std::cerr << e.what() << std::endl;
        }
    }
}