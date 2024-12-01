/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:05:39 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/28 18:43:35 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat (void)
{
    std::cout << "Default Cat Constructor called !" << std::endl;
    this->type = "Cat";
}

Cat::Cat(std::string const type) : Animal(type)
{
    std::cout << "Cat Constructor called !" << std::endl;
}
 
Cat::Cat(Cat const &Robj) : Animal(Robj)
{
    std::cout << "Cat copy Constructor called !" << std::endl;
}

Cat &Cat::operator=(Cat const &Robj)
{
    std::cout << "Cat copy assignment Constructor called !" << std::endl;
    if (this == &Robj)
        return *this;
    this->type = Robj.type;
    return *this;
}

Cat::~Cat() 
{
    std::cout << "Cat Destructor called !" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Cat: Meow Meow !!" << std::endl; 
}
std::string Cat::getType() const 
{
    return type;
}