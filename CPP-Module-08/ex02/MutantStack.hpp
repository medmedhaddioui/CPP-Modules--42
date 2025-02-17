#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>

template <typename T>
class MutantStack  : public std::stack<T> 
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack()
        {
            // std::cout<< "Constructor Called !" << std::endl;
        }
        MutantStack(const MutantStack &obj) : std::stack<T> (obj) {};
        MutantStack &operator=(const MutantStack &obj)
        {
            if (this != &obj)
                std::stack<T>::operator=(obj);
            return *this;
        }
        ~MutantStack()
        {
            // std::cout << "Destructor Called !" << std::endl;
        }
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
};

#endif