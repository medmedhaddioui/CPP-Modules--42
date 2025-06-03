#ifndef ATARGET_HPP
#define ATARGET_HPP
#include <iostream>

class ASpell;
#include "ASpell.hpp"


class Atarget
{

    protected:
        std::string type;
    public:
    Atarget();
    Atarget(std::string const &_type);
    Atarget(Atarget const &obj);
    Atarget &operator=(Atarget const &obj);
    ~Atarget();

    std::string const &getType() const;
    void getHitBySpell(const ASpell  &_ASpell) const ;
    virtual Atarget *clone()  = 0;
};

#endif