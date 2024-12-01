#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>
class Animal
{
    protected:
        std::string type;
    public:
    Animal(void);
    Animal(std::string type);
    Animal(Animal const &Robj);
    Animal &operator=(Animal const &obj);
    virtual ~Animal();

    virtual void makeSound() const;
    virtual std::string getType() const ;
};
#endif