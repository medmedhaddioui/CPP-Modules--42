#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
    private:
        Brain *DogBrain;
    public:
    Dog(void);
    Dog(Dog const &Robj);
    Dog &operator=(Dog const &obj);
    ~Dog();
    
    void makeSound() const ;
    std::string getType() const;
    std::string *getter();
};
#endif