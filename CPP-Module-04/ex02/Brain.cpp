/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:35:19 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/12/02 11:15:09 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain (void)
{
    std::cout << "Default Brain Constructor called !" << std::endl;
    for(int i = 0; i < SIZE_NB ; i++)
        ideas[i] = "Unknow Brain";
}

Brain::Brain(std::string const str)
{
    std::cout << "Brain Constructor called !" << std::endl;
    for(int i = 0; i < SIZE_NB ; i++)
        ideas[i] = str;
}
 
Brain::Brain(Brain const &Robj)
{
    std::cout << "Brain copy Constructor called !" << std::endl;
    *this = Robj;
}

Brain &Brain::operator=(Brain const &Robj)
{
    std::cout << "Brain copy assignment Constructor called !" << std::endl;
    if (this == &Robj)
        return *this;
    for(int i = 0; i < SIZE_NB ; i++)
        this->ideas[i] = Robj.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called !" << std::endl;
}

std::string * Brain::get_ideas()
{
    return ideas;
}
