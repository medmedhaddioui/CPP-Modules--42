#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP 
#include "iostream"

#if __cplusplus >= 201103L
#include <cstdint>
#else
typedef unsigned long uintptr_t; 
#endif

typedef struct s_data
{   
    int var;
    
} Data;

class Serializer
{

    public:
        Serializer();
        Serializer(Serializer const &obj);
        Serializer &operator=(Serializer const &obj);
        ~Serializer();
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};
#endif