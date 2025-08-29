#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
    #include <cmath>

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
        void MergeInsertAlgorithm(size_t n );
        void insertWithJacobsthal (std::vector<std::vector<int> > &main, std::vector<std::vector<int> > &pend);
 
};

#endif