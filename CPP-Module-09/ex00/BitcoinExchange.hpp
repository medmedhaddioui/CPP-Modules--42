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

class BitcoinExchange 
{
    private: 
        std::map<std::string, float> map;
    public:
    static void parse (const char *filename);
    static void SplitDateValue(std::string line, size_t limits);
    // class CustomExecption : public std::exception
    // {   
    //     public:
    //         const char *what () const throw ();
    // };
};
#endif