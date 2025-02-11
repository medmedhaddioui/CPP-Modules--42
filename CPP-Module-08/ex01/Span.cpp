#include "Span.hpp"

Span::Span (unsigned int N) : N(N)
{
    // std::cout << "Constructor Called !" << std::endl;
}

Span::Span(Span const &Robj) 
{
    std::cout << "Copy Constructor Called !" << std::endl;
    *this = Robj;
}

Span &Span::operator=(Span const &Robj)
{
    // std::cout << "Copy assignment Called !" << std::endl;
    if (this == &Robj)
        return *this;
    this->N = Robj.N;
    return *this;
}

Span::~Span()
{
    // std::cout << "Destructor called !" << std::endl;
}

void Span::addNumber(int num)
{
    if (vec.size() == N)
        throw std::exception();
    vec.push_back(num);
}

int Span::shortestSpan()
{
    // handle erros 
    std::vector<int>::iterator it = vec.begin();
    int span = *it - *(it + 1);
    for (; it != vec.end() ; it++)  
    {
        std::cout << *(it + 1) << std::endl;
        if (std::abs(*it - (*(it + 1))) < span)
            span = std::abs(*it - *(it + 1));
    }
    return span;
}
int Span::longestSpan()
{
    return 1;
}
