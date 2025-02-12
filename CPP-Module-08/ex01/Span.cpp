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
    if (vec.empty() || vec.size() == 1)
        throw std::exception();
    std::vector<int>::iterator it = vec.begin();
    int span = std::abs(*it - *(it + 1));
    for (; it != (vec.end() - 1) ; it++)
    {
        if (std::abs(*it - (*(it + 1))) < span)
            span = std::abs(*it - *(it + 1));
    }
    return span;
}

int Span::longestSpan()
{
    if (vec.empty() || vec.size() == 1)
        throw std::exception();
    std::vector<int>::iterator it = vec.begin();
    int span = std::abs(*it - *(it + 1));
    for (; it != (vec.end() - 1) ; it++)  
    {
        if (std::abs(*it - (*(it + 1))) > span)
            span = std::abs(*it - *(it + 1));
    }
    return span;
}

void Span::addNumbers(std::vector<int>::iterator itbegin, std::vector<int>::iterator itend)
{
    for (; itbegin != itend ; itbegin++)
        vec.push_back(*itbegin);
}
