/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:33:54 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/12/06 16:33:45 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice (void) : AMateria("ice")
{
    std::cout << "Default Ice Constructor called !" << std::endl;
}
 
Ice::Ice(Ice const &Robj) : AMateria(Robj.getType())
{
    std::cout << "Ice copy Constructor called !" << std::endl;
}

Ice &Ice::operator=(Ice const &Robj)
{
    std::cout << "Ice copy assignment Constructor called !" << std::endl;
    if (this == &Robj)
        return *this;
    this->type = Robj.type;
    return *this;
}

Ice::~Ice()
{
    std::cout << "Ice Destructor called !" << std::endl;
}

AMateria *Ice::clone() const
{   
    return new Ice (*this);  
}

void Ice::use(ICharacter& target)
{
    std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

