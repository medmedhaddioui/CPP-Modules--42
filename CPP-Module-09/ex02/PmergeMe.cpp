#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

    // std::cout << "Constructor called !" << std::endl;
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

// void printVec(const std::string& name, const std::vector<std::vector<int> >& v) {
//     std::cout << name << " -> ";
//     for (std::vector<std::vector<int> >::const_iterator rowIt = v.begin(); rowIt != v.end(); ++rowIt) 
//     {
//         for (std::vector<int>::const_iterator colIt = rowIt->begin(); colIt != rowIt->end(); ++colIt) 
//             std::cout << *colIt << " ";
//     }
//     std::cout << std::endl;

    
// }
void printVecInt(const std::string& name, const std::vector<int>& v) {
    std::cout << name << " -> ";
    for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
void binarySearch (std::vector<std::vector <int> > &main, std::vector<int> target, size_t lim)
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

void PmergeMe::MergeInsertAlgorithm(size_t Level)
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
    MergeInsertAlgorithm(Level * 2);
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
    printVecInt("vec Final", vec);   
    std::cout << std::endl;
}