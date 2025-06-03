#include "ASpell.hpp"

const std::string &ASpell::getName () const
{
    return this->name;
}
const std::string &ASpell::getEffects () const
{
    return this->effects;
}
ASpell::ASpell() {}
ASpell::ASpell(std::string const &_name , std::string const &_effects)
{
    this->name = _name;
    this->effects = _effects;
}
ASpell::ASpell(ASpell const &obj)
{
    *this = obj;
}

ASpell &ASpell::operator=(ASpell const &obj){
    if (this == &obj)
        return *this;
    this->effects = obj.effects;
    this->name = obj.name;
    return *this;
}

ASpell::~ASpell() {}