/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:09:39 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/12/06 16:18:03 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria (void)
{
    std::cout << "Default AMateria Constructor called !" << std::endl;
    this->type = "Unknown";
}

AMateria::AMateria(std::string const &type)
{
    std::cout << "AMateria Constructor called !" << std::endl;
    this->type = type;
}
 
AMateria::AMateria(AMateria const &Robj)
{
    std::cout << "AMateria copy Constructor called !" << std::endl;
    *this = Robj;
}

AMateria &AMateria::operator=(AMateria const &Robj)
{
    std::cout << "AMateria copy assignment Constructor called !" << std::endl;
    if (this == &Robj)
        return *this;
    this->type = Robj.type;
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor called !" << std::endl;
}

std::string const & AMateria::getType() const
{
    return type;
}
void AMateria::use(ICharacter& target)
{
    (void) target;
    return ;
}