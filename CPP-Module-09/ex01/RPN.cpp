#include "RPN.hpp"

bool RPN::isOperator(char c) 
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

bool RPN::FindNextDigit(std::string &av, size_t &i)
{
    while (++i < av.size())
    {      
        if (std::isdigit(av[i]))
        {
            s.push(av[i] - '0');
            break;
        }
        else if (!std::isspace(av[i]))
            return false;
    }
    if (i == av.size())
        return false;
    return true;
}

void RPN::Solve (std::string av)
{
    for (size_t i = 0; i < av.size() ; i++)
    {
        if (std::isdigit(av[i]))
           s.push(av[i] - '0'); 
        else if  (isOperator(av[i]))
        {
            char op = av[i];
            if (!s.size() || (s.size() == 1 && !FindNextDigit(av, i))) 
                throw std::runtime_error("Error");
            int first = s.top() ;
            s.pop();
            int second = s.top ();
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
}