#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array
{
    private:
        T *arr;
        unsigned int size;
    public:
        Array() : size(0)
        {
            std::cout << "Constructor Called" << std::endl;
            arr = new T[size];
        }
        Array(unsigned int n) : size(n)
        {
            std::cout << "Constructor param Called" << std::endl;
            arr = new T[size];
        }
        Array (Array const &obj)
        {
            std::cout << "Copy Constructor Called" << std::endl;
            this->size = obj.getSize();
            this->arr = new T[this->size];
            for (unsigned int i = 0; i < this->size; i++)
                this->arr[i] = obj.arr[i];
        }
        Array &operator=(Array const &obj)
        {
            if (this == &obj)
                return *this;
            this->size = obj.getSize();
            delete [] this->arr;
            this->arr = new T[this->size];
            for (unsigned int i = 0; i < this->size; i++)
                this->arr[i] = obj.arr[i];
            return *this;
        }

        ~Array()
        {
            delete [] arr;
        }

        T &operator[](unsigned int index) 
        {
            if (index >= size)
                throw std::out_of_range("Index is out of bounds");
            return arr[index];
        }

        unsigned int getSize() const
        {
            return size;
        }
};

#endif