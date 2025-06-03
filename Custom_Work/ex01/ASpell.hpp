#ifndef ASPELL_HPP
#define ASPELL_HPP
#include <iostream>

class Atarget;

#include "ATarget.hpp"

class ASpell
{
    protected:
        std::string name;
        std::string effects;
    public:
    ASpell();
    ASpell(std::string const &_name , std::string const &_effects);
    ASpell(ASpell const &obj);
    ASpell &operator=(ASpell const &obj);
    ~ASpell();
    const std::string &getEffects () const;
    const std::string &getName () const;
    virtual ASpell *clone () const = 0;
    void launch (Atarget const &Atarget) const ;
};

#endif