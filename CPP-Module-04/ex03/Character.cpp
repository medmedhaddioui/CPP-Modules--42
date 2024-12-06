/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:59:40 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/12/06 16:36:26 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character (void)
{
    std::cout << "Default Character Constructor called !" << std::endl;
    this->name = "Unknown";
    for(int i = 0; i < MAX_SLOTS ; i++)
        Inventory[i] = NULL;
    Materiasave = NULL;
}

Character::Character(std::string const &name)
{
    std::cout << "Character Constructor called !" << std::endl;
    this->name = name;
    for (int i = 0; i < MAX_SLOTS; i++) 
        Inventory[i] = NULL;
    Materiasave = NULL;
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
    this->name = Robj.getName();
    for (int i = 0; i < MAX_SLOTS; i++) 
    {
        if (this->Inventory[i])
            delete Inventory[i];
        if (Robj.Inventory[i])
            this->Inventory[i] = Robj.Inventory[i]->clone();  // Deep copy
        else
            this->Inventory[i] = NULL;
    }
    return *this;
}

std::string const & Character::getName() const
{
    return name; 
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    for (int i  = 0; i < MAX_SLOTS ; i ++)
    {
        if (Inventory[i])
            continue;
        Inventory[i] =  m->clone();
        std::cout << "Equip is used" << std::endl;
        return ;
    }
    std::cout << "Inventory is Full !!" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= MAX_SLOTS)
        return ;
    std::cout << "unEquip is used" << std::endl;
    Materiasave =  AddNode(Materiasave, CreateNode(Inventory[idx]));
    Inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) 
{
    if (idx < 0 || idx >= MAX_SLOTS)
        return ;
    if (!Inventory[idx])
        std::cout << "Materia cant be used" << std::endl;
    else
        Inventory[idx]->use(target);
}

Character::~Character()
{
    std::cout << "Character Destructor called !" << std::endl;
    for(int i = 0; i < MAX_SLOTS ; i ++)
    {
        if (Inventory[i])
            delete Inventory[i];
    }
    deleteList(Materiasave);
}