/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:18:05 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/12/02 10:55:43 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
    // const Animal animal; cannot work Animal has abstract class
    const Animal *j = new Cat;
    const Animal *i = new Dog;

    j->makeSound();
    i->makeSound();
    
    return 0;
}