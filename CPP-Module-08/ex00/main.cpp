#include "easyfind.hpp"
int main ()
{
    std::list<int> gqlist ;
    gqlist.push_back(12);
    gqlist.push_back(122);
    gqlist.push_back(1212);
    gqlist.push_back(4);
    try
    {
        easyfind(gqlist, 1212);
        easyfind(gqlist, 7);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}