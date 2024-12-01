#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
    Cat(void);
    Cat(std::string type);
    Cat(Cat const &Robj);
    Cat &operator=(Cat const &obj);
    ~Cat();
    
    void makeSound() const ;
    std::string getType() const ;
};
#endif