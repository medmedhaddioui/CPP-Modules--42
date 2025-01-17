#include "ScalarConverter.hpp"

std::string ScalarConverter::input = "";
double ScalarConverter::valueToCast = 0.0;

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter Constructor Called !!" << std::endl;
}
ScalarConverter::ScalarConverter(ScalarConverter const &obj)
{
    (void) obj;
    std::cout << "ScalarConverter Copy Constructor Called !!" << std::endl;
}
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &obj)
{
    (void) obj;
    std::cout << "ScalarConverter copy Assignment Called !!" << std::endl;
    return *this;
}
ScalarConverter::~ScalarConverter ()
{
    std::cout << "ScalarConverter Destructor Called !!" << std::endl;
}
const char *ScalarConverter::ErrorLiteral::what() const throw()
{
    return ("Invalid Input !");
}
void ScalarConverter::ConvertChar()
{
    if (valueToCast < 0 || valueToCast > 255)
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(static_cast <char> (valueToCast)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast <char> (valueToCast) << std::endl;
}

void ScalarConverter::ConvertInt()
{
    if (valueToCast < INT_MIN || valueToCast > INT_MAX)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast <int> (valueToCast) << std::endl;
}

void ScalarConverter::ConvertFloat()
{
    if (valueToCast == static_cast <int> (valueToCast))
        std::cout << "float: " << static_cast <float> (valueToCast) << ".0f" << std::endl;
    else
        std::cout << "float: " << static_cast <float> (valueToCast) << "f" << std::endl;
}

void ScalarConverter::ConvertDouble()
{
    if (valueToCast == static_cast <int> (valueToCast))
        std::cout << "double: " << valueToCast << ".0" << std::endl;
    else
        std::cout << "double: " << valueToCast << std::endl;
}

void ScalarConverter::SpecialCase(std::string literal)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (literal == "-inff" || literal == "+inff" || literal == "nanf")
    {
        std::cout << "float: " << literal << std::endl;
        literal.erase(literal.size() - 1);
        std::cout << "double: " << literal << std::endl;
        return ;
    }
    std::cout << "float: " << literal << "f" << std::endl;
    std::cout << "double: " << literal << std::endl;
}

void ScalarConverter::DetectType()
{
    if (input.size() == 1 && !std::isdigit(input[0]))
    {
        valueToCast = static_cast <double> (input[0]);
        return ;
    }
    int DotCount = 0;
    for (size_t i = 0; i < input.size(); i ++)
    {
        if (i == 0 && (input[i] == '-'  || input [i] == '+'))
            continue;
        if (i == input.size() - 1 && input[i] == '.')
            throw ErrorLiteral();
        if (i == input.size() - 1 && input[i] == 'f')
            break;
        if (input[i] == '.')
            DotCount++;
        if ((!std::isdigit(input[i]) && input[i] != '.') || DotCount > 1)
            throw ErrorLiteral();
    }
    std::stringstream string(input);
    string >> valueToCast;
    // int max;
}

void ScalarConverter::convert(std::string literal)
{  
    input = literal;
    if (input == "-inff" || input == "+inff" || input == "nanf" || 
        input == "-inf" || input == "+inf" || input == "nan")
        return (ScalarConverter::SpecialCase(input));
    try
    {
        ScalarConverter::DetectType();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return ;
    }
    ScalarConverter::ConvertChar();
    ScalarConverter::ConvertInt();
    ScalarConverter::ConvertFloat();
    ScalarConverter::ConvertDouble();
}
