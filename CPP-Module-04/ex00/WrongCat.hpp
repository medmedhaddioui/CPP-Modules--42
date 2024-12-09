#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    WrongCat(void);
    WrongCat(WrongCat const &Robj);
    WrongCat &operator=(WrongCat const &obj);
    ~WrongCat();
    
    void makeSound() const ;
    std::string getType() const ;
};
#endif