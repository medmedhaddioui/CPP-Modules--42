#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
class Atarget
{

    public:
    Atarget();
    Atarget(std::string const &_name , std::string const &_effects);
    Atarget(Atarget const &obj);
    Atarget &operator=(Atarget const &obj);
    ~Atarget();
    
};

#endif