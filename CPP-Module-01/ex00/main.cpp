/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 21:20:33 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/09/05 20:41:36 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie Foo("Foo: BraiiiiiiinnnzzzZ...");
    Zombie* newZombie = new Zombie("newZombie: BraiiiiiiinnnzzzZ...");
    Foo.announce();
    newZombie->announce();
}