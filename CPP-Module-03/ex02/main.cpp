/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:53:24 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/17 18:46:06 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
    ClapTrap suii("DOG");
    suii.attack("PEACHE");
    suii.beRepaired(21);
    FragTrap zip("zoo");
    zip.attack("Nobdy");
    zip.takeDamage(55);
    zip.beRepaired(21);
}