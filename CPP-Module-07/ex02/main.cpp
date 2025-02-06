#include "Array.hpp"
int main ()
{
    Array<int> s(42);
    Array<int> d;
    Array<int> b (s);
    d = s;
    try
    {
        std::cout << s[12] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "out of range !!" << '\n';
    }
    return 0; 
}