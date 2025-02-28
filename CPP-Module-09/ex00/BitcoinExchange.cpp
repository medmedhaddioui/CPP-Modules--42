#include "BitcoinExchange.hpp"
BitcoinExchange::BitcoinExchange()
{
    // std::cout << "Constructor Called " << std::endl;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
    // std::cout << "copy Constructor Called !" << std::endl;
    *this = obj;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &obj)
{
    // std::cout << "copy assingment called" << std::endl;
    if (this == &obj)
        return *this;
    this->map = obj.map;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
    // std::cout << "Destructor Called" << std::endl;
}

float BitcoinExchange::getClosestDate (std::string &date, float value)
{
    std::map<std::string, float>:: iterator it = map.lower_bound(date);
    if (it->first != date)
        it--;
    return (it->second * value);
}

void BitcoinExchange::CheckValidDateValue(std::string date, std::stringstream &valueStr)
{
    std::stringstream ss (date);
    int year, month, day;
    float value;
    char dash;
    ss >> year >> dash >> month >> dash >> day;
    valueStr >> value;
    if (year == 2009 && day < 2)
        std::cerr << "Error: Date too small" <<  std::endl;
    if (year < 2009)
        std::cerr << "Error: year Too Small" <<  std::endl;
    else if (month < 1 || month > 12 )
        std::cerr << "Error: Incorrect month." << std::endl;
    else if (day < 1 || day > 31)
        std::cerr << "Error: Incorrect day." << std::endl;
    else if (value > 1000)
        std::cerr << "Error: too large a number." << std::endl;
    else
    {
        std::cout << year << "-" << std::setw(2) << std::setfill('0') << month <<
        "-" << std::setw(2) <<  std::setfill('0') << day << " => " << value << " = "
        << getClosestDate (date, value) << std::endl; 
    }
}

void BitcoinExchange::parsing(std::string line, size_t limits)
{
    if (limits == std::string::npos ||  limits != 11 || line[limits - 1] != ' ' || line.size() <= limits + 2)
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
    if (line[++limits] != ' ')
        throw std::runtime_error("Error: bad input => ");
    if (line[++limits] == '-')
            throw std::runtime_error("Error: not a positive number.");
    std::stringstream holdValue;
    bool flagDot = false;
    while (limits < line.size())
    {
        if ((line[limits] == '.' && !std::isdigit(line[limits - 1])) || (line[limits] == '.' && flagDot))
            throw std::runtime_error("Error: bad input => ");
        if (!std::isdigit(line[limits]) && line[limits] != '.')
            throw std::runtime_error("Error: bad input => ");
        if (line [limits] == '.')
            flagDot = true;
        holdValue.put(line[limits++]);
    }
    CheckValidDateValue(date , holdValue);
}

void BitcoinExchange::readInput (const char *filename)
{
    std::fstream inputFile(filename);
    if (!inputFile.is_open())
        throw std::runtime_error("Error wrong inputFile");
    std::string line ;
    std::getline(inputFile, line);
    if (line != "date | value")
        throw std::runtime_error("Error: input File must start with date | value");
    while (std::getline(inputFile, line))
    {
        try
        {
            BitcoinExchange::parsing(line , line.find_first_of('|'));
        }
        catch(const std::exception& e)
        {
            if (static_cast <std::string> (e.what()) == "Error: bad input => ")
                std::cerr << e.what() << line << std::endl;
            else
                std::cerr << e.what() << std::endl;
        }
    }
}

void BitcoinExchange::readData()
{
    std::fstream dateFile("data.csv");
    if (!dateFile.is_open())
        throw std::runtime_error("Error wrong dateFile");
    std::string line, date;
    float rate;
    std::getline(dateFile, line);
    while (std::getline(dateFile, line))
    {
        std::stringstream ss(line);
        if (std::getline(ss, date, ','))
        {
            ss >> rate ;
            map.insert(std::pair<std::string,float>(date, rate));
        }
    }
}