/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:18:05 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/12/02 10:28:18 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"


int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    i->makeSound();
    j->makeSound();
    delete j;
    delete i;
    Dog rob;
    std::cout << rob.getter()[0] << std::endl;
    const Animal *ani[100];
    for (int i = 0 ; i < 100; i++)
    {
        if (i > 50)
            ani[i] = new Dog();
        else
            ani[i] = new Cat();
    }
    for(int i = 0; i < 100 ; i ++)
        ani[i]->makeSound();
    for (int i = 0; i < 100; i++)
        delete ani[i];
    return 0;
}