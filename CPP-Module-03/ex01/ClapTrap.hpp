#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
class ClapTrap
{
    private:
        std::string name;
        int HitPoints;
        int EnergyPoints;
        int AttackPoints;
    public:
        ClapTrap(void);
        ClapTrap(std::string const name);
        ClapTrap(ClapTrap const &Robj);
        ClapTrap &operator=(ClapTrap const &Robj);
        ~ClapTrap(); 
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};
#endif