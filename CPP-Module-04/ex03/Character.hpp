#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "Linkedlist.hpp"

#define MAX_SLOTS 4

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *Inventory[MAX_SLOTS];
        t_MateriaSave *Materiasave;
        
    public:
    Character() ;
    Character(std::string const & name);
    Character(Character const &Robj);
    Character &operator=(Character const &Robj);
    ~Character();
    std::string const & getName() const ;
    void equip(AMateria* m) ;
    void unequip(int idx) ;
    void use(int idx, ICharacter& target) ;
};

#endif