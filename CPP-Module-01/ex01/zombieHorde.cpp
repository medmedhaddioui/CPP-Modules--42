/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 17:00:55 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/09/07 14:16:35 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    Zombie *Zo = new Zombie[N];
    for (int i = 0; i < N; i++)
        Zo[i].set_name(name); 
        // Zo[i] = Zombie(name);
    return Zo;
}
