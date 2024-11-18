/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:20:39 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/17 18:37:31 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
    std::cout << "Derived ScavTrap Default Constructor called !" << std::endl;
    this->name = "Unknown"; 
    HitPoints = 100;
    EnergyPoints = 50; 
    AttackPoints = 20;
}

ScavTrap::ScavTrap(std::string name) 
{
    std::cout << "Derived ScavTrap Constructor called !" << std::endl;
    this->name = name;
    HitPoints = 100;
    EnergyPoints = 50; 
    AttackPoints = 20;  
}

ScavTrap::ScavTrap(ScavTrap const &Robj)
{
   *this = Robj; 
}

ScavTrap &ScavTrap::operator=(ScavTrap const &Robj)
{
    if (this == &Robj)
        return *this;
    this->name = Robj.name;
    this->HitPoints = Robj.HitPoints;
    this->EnergyPoints = Robj.EnergyPoints;
    this->AttackPoints = Robj.AttackPoints;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Derived ScavTrap called !" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (EnergyPoints <= 0 || HitPoints <= 0)
    {
        std::cout << "ScavTrap" << name << " can't attack. No energy or Health points left!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << name  << " attacks " << target << 
            ", causing " << AttackPoints << " points of damage!" << std::endl;
    EnergyPoints--;
}

void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap is now in Gatekeeper mode!" << std::endl;
}