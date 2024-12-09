/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:17:09 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/12/01 12:08:50 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog (void)
{
    std::cout << "Default Dog Constructor called !" << std::endl;
    this->type = "Dog";
    this->DogBrain = new Brain;
}
 
Dog::Dog(Dog const &Robj) : Animal(Robj)
{
    std::cout << "Dog copy Constructor called !" << std::endl;
    this->DogBrain = new Brain(*(Robj.DogBrain));
}

Dog &Dog::operator=(Dog const &Robj)
{
    std::cout << "Dog copy assignment Constructor called !" << std::endl;
    if (this == &Robj)
        return *this;
    this->type = Robj.type;
    delete this->DogBrain;
    this->DogBrain = new Brain(*(Robj.DogBrain));
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called !" << std::endl;
    delete DogBrain;
}

void Dog::makeSound() const
{
    std::cout << "Dog: bark bark !!" << std::endl; 
}

std::string Dog::getType() const
{
    return type;
}

std::string * Dog::getter()
{
    return (DogBrain->get_ideas());
}