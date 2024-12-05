/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medmed <medmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:59:40 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/12/03 18:31:47 by medmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character (void)
{
    std::cout << "Default Character Constructor called !" << std::endl;
    this->index = 0;
    this->name = "Unknown";
    for(int i = 0; i < MAX_SLOTS ; i++)
        slots[i] = NULL;
}

Character::Character(std::string const &name)
{
    std::cout << "Character Constructor called !" << std::endl;
    this->index = 0;
    this->name = name;
    for(int i = 0; i < MAX_SLOTS ; i ++)
        slots[i] = NULL;
}
 
Character::Character(Character const &Robj)
{
    std::cout << "Character copy Constructor called !" << std::endl;
    *this = Robj;
}

Character &Character::operator=(Character const &Robj)
{
    std::cout << "Character copy assignment Constructor called !" << std::endl;
    if (this == &Robj)
        return *this;
    // missing slots
    this->name = Robj.getName();
    this->index = Robj.index;
    for (int i  = 0; i < MAX_SLOTS ; i ++)
    {
        if (Robj.slots[i])
            this->slots[i] = Robj.slots[i]->clone();
    }
    return *this;
}

Character::~Character()
{
    std::cout << "Character Destructor called !" << std::endl;
    // delete [] slots;
}

std::string const & Character::getName() const
{
    return name; 
}

void Character::equip(AMateria* m)
{
    if (index < 0 && index >= MAX_SLOTS)
        return;    
    for (int i  = 0; i <= index ; i ++)
    {
        if (slots[i])
            continue;
        slots[index++] =  m->clone();
        break;
    }
}
void Character::unequip(int idx)
{
    if (index < 0 && index >= MAX_SLOTS)
        return ;
    std::cout << "unEquip is used" << std::endl;
    slots[idx] = NULL;
}
void Character::use(int idx, ICharacter& target) 
{
    if (slots[idx])
        slots[idx]->use(target);
}

