/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:10:15 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/09/08 16:35:12 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack ()
{
    std::cout << name <<  " attacks with their "  <<  club.getType() << std::endl;
}

HumanA::~HumanA()
{
    
};