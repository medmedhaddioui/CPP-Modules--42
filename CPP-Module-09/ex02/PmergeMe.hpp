#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <sstream>
#include <cmath>
#include <ctime>

class PmergeMe
{
    private:
        std::vector<int> vec;
        std::deque<int> deque;
    public:
        PmergeMe();
        PmergeMe(char ** av);
        PmergeMe(const PmergeMe &obj);
        PmergeMe& operator=(const PmergeMe &obj);
        ~PmergeMe();
        void MergeInsertionVec(size_t Level  = 2);
        void MergeInsertionDeque (size_t Level = 2);
        template <typename M, typename T>
        void binarySearch (M &main, T target, size_t lim)
        {
            int start = 0;
            int end = lim;
            while(start < end) {
                int mid =  start  + (end - start ) / 2;
                if (main[mid].back() < target.back())
                    start = mid + 1;
                else
                    end = mid;
            }
            main.insert(main.begin() + start , target);
        }
};

#endif

        // void insertWithJacobsthal (std::vector<std::vector<int> > &main, std::vector<std::vector<int> > &pend, std::vector<int> rest);
