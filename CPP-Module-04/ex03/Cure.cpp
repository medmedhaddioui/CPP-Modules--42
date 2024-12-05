/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medmed <medmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:24:02 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/12/03 18:31:18 by medmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

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
AMateria *Cure::clone() const
{   
    return new Cure(*this); 
}
void Cure::use(ICharacter& target)
{
    std::cout <<"* heals "<<  target.getName() << "'s wounds *" << std::endl;
}
