#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

class PmergeMe
{
    private:
        std::vector<int> vec;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &obj);
        PmergeMe& operator=(const PmergeMe &obj);
        ~PmergeMe();
        void checkValidArgs(std::string av);
        void MergeInsertAlgorithm();
};

#endif