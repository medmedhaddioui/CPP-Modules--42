/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:24:02 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/12/02 13:32:03 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure (void) : AMateria("cure")
{
    std::cout << "Default Cure Constructor called !" << std::endl;
}

Cure::Cure(std::string const &type) : AMateria(type)
{
    std::cout << "Cure Constructor called !" << std::endl;
}
 
Cure::Cure(Cure const &Robj) : AMateria(Robj.getType())
{
    std::cout << "Cure copy Constructor called !" << std::endl;
}

Cure &Cure::operator=(Cure const &Robj)
{
    std::cout << "Cure copy assignment Constructor called !" << std::endl;
    if (this == &Robj)
        return *this;
    this->type = Robj.type;
    return *this;
}

Cure::~Cure()
{
    std::cout << "Cure Destructor called !" << std::endl;
}
