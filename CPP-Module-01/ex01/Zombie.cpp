/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 17:04:59 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/09/07 14:00:21 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce (void)
{
    std::cout << name << std::endl;
}

Zombie::Zombie()
{
    
}

Zombie::~Zombie()
{
    std::cout << "ENDING OF ZOMBIE " << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}