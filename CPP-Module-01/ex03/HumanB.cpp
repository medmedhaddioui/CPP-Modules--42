/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:10:06 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/09/08 17:50:05 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack ()
{
    if(!club)
        std::cout << name <<  " attacks with their "  <<  "rjlih" << std::endl ;
    else
        std::cout << name <<  " attacks with their "  <<  club->getType() << std::endl ;
    
}

void HumanB::setWeapon(Weapon &club)
{
    this->club = &club;
}

HumanB::~HumanB()
{
    
};