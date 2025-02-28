#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <fstream>
#include <ctime>
#include <exception>
#include <sstream>
#include <iomanip>

class BitcoinExchange 
{
    private: 
        std::map<std::string, float> map;
    public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &obj);
    BitcoinExchange &operator=(const BitcoinExchange &obj);
    ~BitcoinExchange();
    
    void readInput(const char *filename);
    void readData();
    void parsing(std::string line, size_t limits);
    void CheckValidDateValue(std::string date, std::stringstream &valueStr);
    float getClosestDate (std::string &date, float value);
};
#endif