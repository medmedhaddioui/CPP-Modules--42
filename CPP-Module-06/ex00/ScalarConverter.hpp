#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include "iostream"

class ScalarConverter
{
    ScalarConverter();
    ScalarConverter(ScalarConverter &obj);
    ScalarConverter &operator=(ScalarConverter &obj);
    ~ScalarConverter();
    static void convert(std::string str)
};
#endif 