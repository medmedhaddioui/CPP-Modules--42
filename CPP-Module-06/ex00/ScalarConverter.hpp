#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <sstream>
#include <climits>

class ScalarConverter
{
    private:
        static double valueToCast;
        static std::string input;
    public:

        ScalarConverter();
        ScalarConverter(ScalarConverter const &obj);
        ScalarConverter &operator=(ScalarConverter const &obj);
        ~ScalarConverter();

        static void ConvertChar();
        static void ConvertInt();
        static void ConvertFloat();
        static void ConvertDouble();
        static void SpecialCase(std::string literal);
        static void DetectType();
        static void convert(std::string str);
        class ErrorLiteral : public std::exception
        {
            public:
                const char *what() const throw();
        };
};

#endif 