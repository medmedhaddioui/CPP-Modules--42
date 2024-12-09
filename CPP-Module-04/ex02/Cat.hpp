#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *CatBrain;
    public:
    Cat(void);
    Cat(Cat const &Robj);
    Cat &operator=(Cat const &obj);
    ~Cat();
    
    void makeSound() const ;
    std::string getType() const ;
    std::string *getter();
    
};
#endif