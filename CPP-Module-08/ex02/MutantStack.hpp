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
        MutantStack()
        {
            std::cout<< "Constructor Called !" << std::endl;
        }
        ~MutantStack()
        {
            std::cout << "Destructor Called !" << std::endl;
        }
        void push (const T value)
        {
            vec.push_back(value);
        }
        size_t size()
        {
            return vec.size();
        }
        void printTmp()
        {
            for (typename std::vector <T>::iterator it = vec.begin (); it != vec.end() ; it ++)
                std::cout  << *it << std::endl;
        }
};


#endif