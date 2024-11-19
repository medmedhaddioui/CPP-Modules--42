#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

 class ScavTrap : public virtual ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(std::string  name);
    ScavTrap(ScavTrap const &Robj);
    ScavTrap &operator=(ScavTrap const &Robj);
    ~ScavTrap();
    
    void attack(const std::string& target);
    void guardGate();
};

#endif