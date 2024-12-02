/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:33:54 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/12/02 13:32:47 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice (void) : AMateria("ice")
{
    std::cout << "Default Ice Constructor called !" << std::endl;
}

Ice::Ice(std::string const &type) : AMateria(type)
{
    std::cout << "Ice Constructor called !" << std::endl;
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

