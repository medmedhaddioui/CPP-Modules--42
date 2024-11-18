/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:34:07 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/17 18:52:00 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
FragTrap::FragTrap() 
{
    std::cout << "Derived FragTrap Default Constructor called !" << std::endl;
    this->name = "Unknown"; 
    HitPoints = 100;
    EnergyPoints = 100; 
    AttackPoints = 30;
}

FragTrap::FragTrap(std::string name) 
{
    std::cout << "Derived FragTrap Constructor called !" << std::endl;
    this->name = name;
    HitPoints = 100;
    EnergyPoints = 100; 
    AttackPoints = 30;  
}

FragTrap::FragTrap(FragTrap const &Robj)
{
   *this = Robj; 
}

FragTrap &FragTrap::operator=(FragTrap const &Robj)
{
    if (this == &Robj)
        return *this;
    this->name = Robj.name;
    this->HitPoints = Robj.HitPoints;
    this->EnergyPoints = Robj.EnergyPoints;
    this->AttackPoints = Robj.AttackPoints;
    return *this;
}
FragTrap::~FragTrap ()
{
    std::cout << "Destructor FragTrap called !" << std::endl;
}

void FragTrap::highFivesGuys(void) 
{
    std::cout << "FragTrap requests a high five!" << std::endl;
}