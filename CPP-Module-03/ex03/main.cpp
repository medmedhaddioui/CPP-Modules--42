/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:53:24 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/18 18:19:44 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main ()
{
    DiamondTrap a;
    a.attack("king");
    a.beRepaired(12);
    a.highFivesGuys();
    a.guardGate();
    a.takeDamage(200);
    a.takeDamage(10);
    a.whoAmI();
}