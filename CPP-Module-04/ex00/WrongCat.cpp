/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:25:51 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/28 20:26:01 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat (void)
{
    std::cout << "Default WrongCat Constructor called !" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(std::string const type) : WrongAnimal(type)
{
    std::cout << "WrongCat Constructor called !" << std::endl;
}
 
WrongCat::WrongCat(WrongCat const &Robj) : WrongAnimal(Robj)
{
    std::cout << "WrongCat copy Constructor called !" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &Robj)
{
    std::cout << "WrongCat copy assignment Constructor called !" << std::endl;
    if (this == &Robj)
        return *this;
    this->type = Robj.type;
    return *this;
}

WrongCat::~WrongCat() 
{
    std::cout << "WrongCat Destructor called !" << std::endl;
}
void WrongCat::makeSound() const
{
    std::cout << "WrongCat: Meow Meow !!" << std::endl; 
}
std::string WrongCat::getType() const 
{
    return type;
}