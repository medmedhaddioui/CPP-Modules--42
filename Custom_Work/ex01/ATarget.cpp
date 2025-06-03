#include "ATarget.hpp"

Atarget::Atarget() {}

Atarget::Atarget(std::string const &_type)
{
    this->type = _type;
}

Atarget::Atarget(Atarget const &obj)
{
    *this = obj;
}

Atarget &Atarget::operator=(Atarget const &obj){
    if (this == &obj)
        return *this;
    this->type = obj.type;
    return *this;
}

Atarget::~Atarget() {}

std::string const &Atarget::getType() const
{
    return this->type;
}

void Atarget::getHitBySpell(const ASpell  &_ASpell) const 
{
    std::cout << this->type << " has been " << _ASpell.getEffects() << "!" << std::endl;
}