/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:42:00 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/18 20:52:12 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Derived Diamond Default constructor called !" << std::endl;
    name = "UnKnown";
    ClapTrap::name = name +  "_clap_name"; // ..
    HitPoints = FragTrap::HitPoints;
    EnergyPoints = ScavTrap::EnergyPoints;
    AttackPoints = FragTrap::AttackPoints;
}

DiamondTrap::DiamondTrap(std::string const name)
{
    std::cout << "Diamond constructor called !" << std::endl;
    this->name = name ;
    ClapTrap::name = name +   "_clap_name";
    HitPoints = FragTrap::HitPoints;
    EnergyPoints = ScavTrap::EnergyPoints;
    AttackPoints = FragTrap::AttackPoints;
}

DiamondTrap::DiamondTrap(DiamondTrap const &Robj)
{
   *this = Robj; 
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &Robj)
{
    if (this == &Robj)
        return *this;
    this->name = Robj.name;
    this->HitPoints = Robj.HitPoints;
    this->EnergyPoints = Robj.EnergyPoints;
    this->AttackPoints = Robj.AttackPoints;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Derived Diamond called !" << std::endl;
}
void DiamondTrap::whoAmI ()
{
    std::cout << name << std::endl;
    std::cout << ClapTrap::name << std::endl;
}