#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <cmath>  
class Span 
{
    private :
        unsigned int N;
        std::vector<int> vec;
    public:
        Span(unsigned int N);
        Span(Span const &Robj);
        Span &operator=(Span const &Robj);
        ~Span();
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
        void addNumbers (std::vector<int>::iterator itbegin, std::vector<int>::iterator itend);
};
#endif