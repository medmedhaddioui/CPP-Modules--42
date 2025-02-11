#include "iter.hpp"
int main ()
{
    int arr[4]  = {12, 32, 44, 22};
    ::iter(arr, 4, &PrintElement);

    std::string strings[4] = {"Helo", "World", "cup", "1337"};
    ::iter(strings, 4, &PrintElement);
}