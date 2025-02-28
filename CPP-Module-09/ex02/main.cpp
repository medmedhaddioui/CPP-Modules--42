#include "PmergeMe.hpp"

// int main (int ac , char **av)
// {
//     if (ac == 1)
//         return 1;
//     try
//     {
//         PmergeMe p;
//         for (int i = 1; i < ac ; i++)
//             p.checkValidArgs(av[i]);
//         p.MergeInsertAlgorithm();
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
// }
void MergeSort(std::vector <int> &vec, int left , int right)
{
    if (left < right)
    {
         int mid = left + (right - left) / 2;
    }
}
int main ()
{
    std::vector <int> vec ({9,3,7,5,6,4,8,2});
    int n = vec.size();
    MergeSort(vec, 0 , n - 1);
}

