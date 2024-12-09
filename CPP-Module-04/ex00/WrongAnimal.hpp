#ifndef WrongANIMAL_HPP
#define WrongANIMAL_HPP


#include <iostream>
class WrongAnimal
{
    protected:
        std::string type;
    public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const &Robj);
    WrongAnimal &operator=(WrongAnimal const &obj);
    ~WrongAnimal();

    void makeSound() const;
    std::string getType() const ;
};
#endif