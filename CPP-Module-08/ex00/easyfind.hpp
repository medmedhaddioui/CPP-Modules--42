#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <exception>
#include <algorithm>

template <typename T>
void easyfind(T &FirstArg, int match)
{
    typename T::iterator it = find(FirstArg.begin(), FirstArg.end(), match);
    if (it == FirstArg.end())
        throw std::exception();
    std::cout << "is Found" << std::endl;
}
#endif