/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:26:38 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/08/30 20:37:17 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

std::string  Contact::get_Fname()
{
    return FirstName;
}

std::string Contact::get_Lname()
{
    return LastName;
}

std::string Contact::get_Nname()
{
    return Nickname;
}

std::string Contact::get_Pnumber()
{
    return PhoneNumber;
}

std::string Contact::get_Dsecret()
{
    return DarkSecret;
}

void Contact::set_Fname(std::string str)
{
    FirstName = str;
}

void Contact::set_Lname(std::string str)
{
    LastName = str;
}

void Contact::set_Nname(std::string str)
{
    Nickname = str;
}

void Contact::set_Pnumber(std::string str)
{
    PhoneNumber = str;
}

void Contact::set_Dsecret(std::string str)
{
    DarkSecret = str;
}
