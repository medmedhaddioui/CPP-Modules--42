#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    // std::cout << "Constructor called !" << std::endl;
}
PmergeMe::PmergeMe(char ** av)
{
    for (size_t i = 1; av[i] ; i++) {
        std::string str (av[i]);
        for (size_t j = 0; j < str.size(); j++) {
            if (!std::isdigit(str[j]))
                throw std::runtime_error("Error");
        }
        int value;
        std::stringstream ss(str);
        ss >> value;
        vec.push_back(value);
        deque.push_back(value);
    }
    std::cout << "Before: ";
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    clock_t VecTimeStart = clock();
    MergeInsertionVec();
    clock_t VecTimeEnd = clock();
    clock_t DequeTimeStart = clock();
    MergeInsertionDeque();
    clock_t DequeTimeEnd = clock();
    std::cout << "After: ";
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << std::fixed
    << (VecTimeEnd - VecTimeStart)  * 1000000.0 / CLOCKS_PER_SEC << " us" << std::endl;
    std::cout << "Time to process a range of " << deque.size() << " elements with std::deque : " << std::fixed
    << (DequeTimeEnd - DequeTimeStart)  * 1000000.0 / CLOCKS_PER_SEC <<  " us" << std::endl; 
}
PmergeMe::PmergeMe(const PmergeMe &obj)
{
    // std::cout << "Copy Constructor called" << std::endl;all
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

void printVecInt(const std::string& name, const std::vector<int>& v) {
    std::cout << name << " -> ";
    for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::MergeInsertionVec(size_t Level)
{
    if (Level > vec.size())
       return ;
    for (size_t i = 0; (i + Level - 1)  < vec.size() ; i += Level) {
        size_t b1 = i + (Level / 2) - 1;
        size_t a1 = i + Level - 1;
        if (vec[b1]  > vec[a1]) {
            for (size_t j = 0 ; j < Level / 2 ; j++)
                std::swap(vec[j + i], vec[(Level / 2) + j + i]);
        }
    }
    MergeInsertionVec(Level * 2);
    std::vector<std::vector<int> > main;
    std::vector<std::vector<int> > pend;
    std::vector<int> rest;
    size_t pairSize = Level / 2;
    size_t i = Level;
    main.push_back(std::vector<int>(vec.begin(), vec.begin() + pairSize));
    main.push_back(std::vector<int>(vec.begin() + pairSize, vec.begin() + Level));
    while (i + Level <= vec.size()) {
        pend.push_back(std::vector <int>(vec.begin() + i, vec.begin() + i + pairSize));
        main.push_back(std::vector <int>(vec.begin() + i + pairSize , vec.begin() + i + Level));
        i += Level;
    }
    if (i + pairSize <= vec.size()) {
        pend.push_back(std::vector<int> (vec.begin() + i, vec.begin() + i + pairSize));
        i += pairSize;
    }
    if (i < vec.size())
        rest.insert(rest.end(), vec.begin() + i, vec.end());
    if (!pend.empty()) {
        // generate jacob number
        std::vector <int> jacobsthal;
        jacobsthal.push_back(1);
        int num = 3;
        while (static_cast <size_t> (jacobsthal.back()) < pend.size()) {
            int Jacobnumber = (std::pow(2, num) - std::pow(-1, num)) / 3;
            jacobsthal.push_back(Jacobnumber);
            num++;
        }
        // inserting
        if (jacobsthal.size() >= 2) {
            size_t prevJacob = *jacobsthal.begin();
            size_t currentJacob = *(jacobsthal.begin() + 1);
            size_t x = 2;
            while (currentJacob - prevJacob > 0) {
                size_t index = currentJacob - prevJacob - 1;
                if (index < pend.size())  {
                    size_t	rangeSearch = std::pow(2, x) - 1; // surface area for main
                    size_t bound = std::min (rangeSearch , main.size());
                    binarySearch(main, pend[index], bound);
                    pend.erase(pend.begin() + index);
                }
                prevJacob++;
                if (currentJacob == prevJacob) {
                    if (jacobsthal.size() > 2) {
                        jacobsthal.erase(jacobsthal.begin());
                        prevJacob = *jacobsthal.begin();
                        currentJacob =  *(jacobsthal.begin() + 1);
                        x++;
                    }
                    else
                        break;
                }
            }
        }
        // pend rest
        for (int pos = static_cast<int> (pend.size() - 1); pos >= 0; pos--)
            binarySearch(main, pend[pos], main.size());
        vec.clear();
	    for (size_t i = 0; i < main.size(); ++i) {
	    	for (size_t j = 0; j < main[i].size(); ++j) {
	    		vec.push_back(main[i][j]);
	    	}
	    }
	    for (size_t i = 0; i < rest.size(); ++i) {
	    	vec.push_back(rest[i]);
	    }
    }
}

void PmergeMe::MergeInsertionDeque (size_t Level)
{
   if (Level > deque.size())
       return ;
    for (size_t i = 0; (i + Level - 1)  < deque.size() ; i += Level) {
        size_t b1 = i + (Level / 2) - 1;
        size_t a1 = i + Level - 1;
        if (deque[b1]  > deque[a1]) {
            for (size_t j = 0 ; j < Level / 2 ; j++)
                std::swap(deque[j + i], deque[(Level / 2) + j + i]);
        }
    }
    MergeInsertionDeque(Level * 2);
    std::deque<std::deque<int> > main;
    std::deque<std::deque<int> > pend;
    std::deque<int> rest;
    size_t pairSize = Level / 2;
    size_t i = Level;
    main.push_back(std::deque<int>(deque.begin(), deque.begin() + pairSize));
    main.push_back(std::deque<int>(deque.begin() + pairSize, deque.begin() + Level));
    while (i + Level <= deque.size()) {
        pend.push_back(std::deque <int>(deque.begin() + i, deque.begin() + i + pairSize));
        main.push_back(std::deque <int>(deque.begin() + i + pairSize , deque.begin() + i + Level));
        i += Level;
    }
    if (i + pairSize <= deque.size()) {
        pend.push_back(std::deque<int> (deque.begin() + i, deque.begin() + i + pairSize));
        i += pairSize;
    }
    if (i < deque.size())
        rest.insert(rest.end(), deque.begin() + i, deque.end());
    if (!pend.empty()) {
        std::deque <int> jacobsthal;
        jacobsthal.push_back(1);
        int num = 3;
        while (static_cast <size_t> (jacobsthal.back()) < pend.size()) {
            int Jacobnumber = (std::pow(2, num) - std::pow(-1, num)) / 3;
            jacobsthal.push_back(Jacobnumber);
            num++;
        }
        if (jacobsthal.size() >= 2) {
            size_t prevJacob = *jacobsthal.begin();
            size_t currentJacob = *(jacobsthal.begin() + 1);
            size_t x = 2;
            while (currentJacob - prevJacob > 0) {
                size_t index = currentJacob - prevJacob - 1;
                if (index < pend.size())  {
                    size_t	rangeSearch = std::pow(2, x) - 1;
                    size_t bound = std::min (rangeSearch , main.size());
                    binarySearch(main, pend[index], bound);
                    pend.erase(pend.begin() + index);
                }
                prevJacob++;
                if (currentJacob == prevJacob) {
                    if (jacobsthal.size() > 2) {
                        jacobsthal.erase(jacobsthal.begin());
                        prevJacob = *jacobsthal.begin();
                        currentJacob =  *(jacobsthal.begin() + 1);
                        x++;
                    }
                    else
                        break;
                }
            }
        }
        for (int pos = static_cast<int> (pend.size() - 1); pos >= 0; pos--)
            binarySearch(main, pend[pos], main.size());
        deque.clear();
	    for (size_t i = 0; i < main.size(); ++i) {
	    	for (size_t j = 0; j < main[i].size(); ++j) {
	    		deque.push_back(main[i][j]);
	    	}
	    }
	    for (size_t i = 0; i < rest.size(); ++i) {
	    	deque.push_back(rest[i]);
	    }
    }
}
