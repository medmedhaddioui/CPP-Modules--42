#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <vector>
#include <list>
template <class T>
class MutantStack 
{
    private:
        std::vector<T> vec;
    public:
        MutantStack();
        ~MutantStack();
}


#endif