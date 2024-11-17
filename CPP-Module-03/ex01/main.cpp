/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:53:24 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/17 11:22:47 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
    ClapTrap Killer("Pro");
    Killer.attack("Noob");
    Killer.attack("Noob");
    Killer.takeDamage(5); 
    Killer.beRepaired(5);
}