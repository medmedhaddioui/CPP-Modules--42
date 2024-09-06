/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:42:51 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/09/06 12:36:09 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie (std::string _name)
{
    name = _name;
}

Zombie::~Zombie ()
{
    std::cout << "Zombie has been destroyed." << std::endl;
}
