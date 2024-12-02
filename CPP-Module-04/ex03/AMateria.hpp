#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "Character.hpp"
class AMateria
{
    protected:
        std::string type;
    public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(AMateria const &Robj);
    AMateria &operator=(AMateria const &Robj);
    ~AMateria();
    std::string const & getType() const ; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif