/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:29:30 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/28 20:32:36 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal (void)
{
    std::cout << "Default WrongAnimal Constructor called !" << std::endl;
    type = "WrongAnimal";
}
 
WrongAnimal::WrongAnimal(WrongAnimal const &Robj)
{
    std::cout << "WrongAnimal copy Constructor called !" << std::endl;
    *this = Robj;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &Robj)
{
    std::cout << "WrongAnimal copy assignment Constructor called !" << std::endl;
    if (this == &Robj)
        return *this;
    this->type = Robj.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called !" << std::endl;
}
void WrongAnimal::makeSound() const 
{
    std::cout << "WrongAnimal sound !" << std::endl;   
}
std::string WrongAnimal::getType() const
{
    return type;
}
