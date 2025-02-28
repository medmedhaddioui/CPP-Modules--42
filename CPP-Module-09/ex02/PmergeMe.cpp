#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    // std::cout << "Constructor called !" << std::endl;
}
PmergeMe::PmergeMe(const PmergeMe &obj)
{
    // std::cout << "Copy Constructor called" << std::endl;
    *this = obj;
}
PmergeMe& PmergeMe::operator=(const PmergeMe &obj)
{
    if (this == &obj)
        return *this;
    return *this;
    // std::cout << "copy assignment called" << std::endl;
}
PmergeMe::~PmergeMe()
{
    // std::cout << "Destructor called !" << std::endl;
}

void PmergeMe::checkValidArgs(std::string av)
{
    for (size_t i = 0; i  < av.size(); i++)
    {
        if (!std::isdigit(av[i]))
            throw std::runtime_error("Error: Non positive integer");
    }
    int value;
    std::stringstream ss(av);
    ss >> value;
    vec.push_back(value);
}

void PmergeMe::MergeInsertAlgorithm()
{
    std::vector<int>:: iterator it = vec.begin();
    std::cout << "Before: ";
    for (; it  != vec.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}