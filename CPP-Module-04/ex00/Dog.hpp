#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
    Dog(void);
    Dog(Dog const &Robj);
    Dog &operator=(Dog const &obj);
    ~Dog();
    
    void makeSound() const ;
    std::string getType() const;
};
#endif