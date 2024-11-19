#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(void);
        DiamondTrap(std::string const name);
        DiamondTrap(DiamondTrap const &Robj);
        DiamondTrap &operator=(DiamondTrap const &Robj);
        ~DiamondTrap(); 


        void whoAmI();

};
#endif