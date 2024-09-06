/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 21:20:33 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/09/06 12:44:30 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie* newZ = newZombie("newZombie: ");
    newZ->announce();
    delete newZ;
    randomChump("RandomChump: ");
}