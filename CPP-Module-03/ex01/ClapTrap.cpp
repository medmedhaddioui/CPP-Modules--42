/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:53:21 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/17 12:11:30 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (void)
{
    std::cout << "Default Constructor called !" << std::endl;
    this->name = "Unknown"; 
    HitPoints = 10;
    EnergyPoints = 10; 
    AttackPoints = 0;  
}
ClapTrap::ClapTrap(std::string const name)
{
    std::cout << "Constructor called !" << std::endl;
    this->name = name; 
    HitPoints = 10;
    EnergyPoints = 10; 
    AttackPoints = 0;  
}
 
ClapTrap::ClapTrap(ClapTrap const &Robj)
{
    *this = Robj;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &Robj)
{
    if (this == &Robj)
        return *this;
    this->name = Robj.name;
    this->HitPoints = Robj.HitPoints;
    this->EnergyPoints = Robj.EnergyPoints;
    this->AttackPoints = Robj.AttackPoints;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called !" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (EnergyPoints <= 0 || HitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " can't attack. No energy or Health points left!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name  << " attacks " << target << 
            ", causing " << AttackPoints << " points of damage!" << std::endl;
    EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " can't take damage. Health points left!" << std::endl;
        return ;
    }
    std::cout << name << " take Damage, causing losing amount of hit(" << amount << ")" << std::endl;
    HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (EnergyPoints <= 0 || HitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " can't repair itself. No energy or Health points left!" << std::endl;
        return;
    }
    std::cout << name << " Repaired itself by amount of health(" << amount << ")" << std::endl;
    HitPoints += amount;
    EnergyPoints--;
}

