#include "PmergeMe.hpp"

int main (int ac , char **av)
{
    if (ac == 1)
        return 1;
    try
    {
        PmergeMe p;
        for (int i = 1; i < ac ; i++)
            p.checkValidArgs(av[i]);
        p.MergeInsertAlgorithm(2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}


// void MergeSort(std::vector <int> &vec, int firstElm , int lastElm)
// {

//     if (firstElm < lastElm)
//     {
//         int mid  = (firstElm + lastElm) / 2;
//         MergeSort(vec, firstElm, mid);
//         MergeSort(vec, mid + 1, lastElm);
//     }
// }
// int main ()
// {
//     std::vector <int> vec ({9,3,7,5,6,4,8,2});
//     MergeSort(vec, 0 , (vec.size() -  1));
// }

