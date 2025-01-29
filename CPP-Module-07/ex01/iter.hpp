#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>


template <typename T>
void iter(T *arr, size_t size, void (*PrintElement)(T element))
{
    for (size_t i = 0; i < size; i ++) 
        PrintElement(arr[i]);
}
template <typename T>
void PrintElement(T element)
{
    std::cout << element << std::endl;
}
#endif 