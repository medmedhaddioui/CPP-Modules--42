#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <stack>
class RPN
{
    private:
    std::stack <int> s;
    public :
        // RPN();
        // ~RPN();
        void Solve(std::string av);
        bool FindNextDigit(std::string &av, size_t &i);
        bool isOperator(char c) ;
};
#endif 