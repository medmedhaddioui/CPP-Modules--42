#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <stack>
class RPN
{
    private:
    std::stack <double> s;
    public :
        RPN();
        RPN (RPN const &obj);
        RPN &operator=(RPN const &obj);
        ~RPN();
        void solvePolish(std::string av);
        bool isOperator(char c) ;
};
#endif 