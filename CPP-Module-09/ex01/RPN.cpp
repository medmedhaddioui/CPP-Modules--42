#include "RPN.hpp"
RPN::RPN ()
{
    // std::cout << "Constructor Called !" << std::endl;
}
RPN::RPN (RPN const &obj)
{
    // std::cout << "copy Constructor Called !" << std::endl;
    *this = obj;
}
RPN &RPN::operator=(RPN const &obj)
{
    // std::cout << "copy assingment called" << std::endl;
    if (this == &obj)
        return *this;
    this->s = obj.s;
    return *this;
}
RPN::~RPN()
{
    // std::cout << "Destructor Called !" << std::endl;
}

bool RPN::isOperator(char c) 
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void RPN::solvePolish (std::string av)
{
    for (size_t i = 0; i < av.size() ; i++)
    {
        if (std::isdigit(av[i]))
           s.push(av[i] - '0'); 
        else if  (isOperator(av[i]))
        {
            char op = av[i];
            if (s.size() < 2)
                throw std::runtime_error("Error");
            double first = s.top() ;
            s.pop();
            double second = s.top ();
            s.pop();
            if (op == '+')
                s.push(second + first);
            else if (op == '-')
                s.push(second - first);
            else if (op == '*')
                s.push(second * first);
            else
                s.push(second / first);
        }
        else if (!std::isspace(av[i]))
            throw std::runtime_error("Error");
    }
    if (s.size() == 1)
        std::cout << s.top() << std::endl;
    else
        throw std::runtime_error("Error");
}