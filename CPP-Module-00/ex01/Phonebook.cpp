/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 22:16:38 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/10/22 12:57:35 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string PhoneBook::read_cmd(std::string msg)
{
    std::string str;
    std::cout << "Please " << contacts_arr[index].get_Fname() << msg;
    while (getline(std::cin, str))
    {
        if (!str.empty())
            return str;
        std::cout << "Please " << contacts_arr[index].get_Fname() << msg ;
    }
    std::cout << std::endl << "PhoneBook Closed !!" << std::endl ;
    exit (EXIT_SUCCESS);
}

PhoneBook::PhoneBook()
{
    index = 0;
}

void PhoneBook::ADD ()
{
    int save = index;
    index %= 8;
    std::string str;
    contacts_arr[index].set_Fname(read_cmd("enter your FirstName: "));
    contacts_arr[index].set_Lname(read_cmd(" enter your LastName: "));
    contacts_arr[index].set_Nname(read_cmd(" enter your Nickname: "));
    contacts_arr[index].set_Pnumber(read_cmd(" enter your PhoneNumber: "));
    contacts_arr[index].set_Dsecret(read_cmd(" enter your DarkSecret: "));
    std::cout << contacts_arr[index].get_Fname() << " successfully added to phonebook [" << index + 1 << "/8]" << std::endl;
    index = save;
    index++;
}

void PhoneBook::EXIT()
{
    std::cout << std::endl << "PhoneBook Closed !!" << std::endl ;
    exit (EXIT_SUCCESS);
}

void PhoneBook::SEARCH()
{
    for (int i = 0; i < 44 ; i++)
    {
        if (i == 0)
            std::cout << " " ;
        else
            std::cout << "_" ;
    }
    std::cout << std::endl;
    std::string arr[4] = {"Index", "First Name", "Last Name", "Nickname"};
    for (int i = 0; i < 4; i++)
    {
        std::cout << "|";
        std::cout <<  std::setw (10) ;
        std::cout << arr[i];
    }
    std::cout << "|" << std::endl;
    for (int i = 0; i < 44 ; i++)
    {
        if (i == 0)
            std::cout << "|";
        else
            std::cout << "-" ;
        if (i == 43)
            std::cout << "|";
    }
    std::cout << std::endl;
    for (int current_i = 0; current_i < index && current_i < 8; current_i++)
    {
        std::cout << "|";
        std::cout << std::setw (10);
        std::cout << current_i + 1;
        std::string info[3] = {contacts_arr[current_i].get_Fname(),
        contacts_arr[current_i].get_Lname(),contacts_arr[current_i].get_Nname()};
        for (int i = 0; i < 3; i++)
        {
            std::cout << "|";
            std::cout << std::setw (10);
            if (info[i].size() > 9)
                std::cout << info[i].substr(0, 9) + '.';
            else 
                std::cout << info[i];
        }
        std::cout  << "|" << std::endl;
    }
    if (index == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            std::cout << "|";
            std::cout  << std::setw (10) ;
            std::cout << "Empty  ";
        }
        std::cout  << "|";
        std::cout << std::endl;
        for(int i = 0; i < 44 ; i++)
        {
            if (i == 0)
                std::cout << " " ;
            else
                std::cout << "-" ;
        }
        std::cout << std::endl;
        std::cout << "PhoneBook is empty" << std::endl;
        return ; 
    }
    for (int i = 0; i < 43 ; i++)
    {
        if (i == 0)
            std::cout << ' ';
        std::cout << '-';
    }
    std::cout << std::endl;
    int value;
    std::string index_selected;
    std::cout << "Select index : ";
    while (getline(std::cin, index_selected))
    {
        if (index_selected.length() == 1 && isdigit(index_selected[0]))
        {
            value = index_selected[0] - '0';
            if (value > 0 && value <= index && value <= 8)
                break;
        }
        std::cout << "Invalid index !" << std::endl;
        std::cout << "Select index : ";
    }
    if (index_selected.empty())
    {
        std::cout << std::endl << "PhoneBook Closed !!";
        exit(EXIT_SUCCESS);
    }
    std::cout << "FirstName: " << contacts_arr[value - 1].get_Fname() << std::endl ;
    std::cout << "LastName: " << contacts_arr[value - 1].get_Lname() << std::endl;
    std::cout << "Nickname: " << contacts_arr[value - 1].get_Nname() << std::endl;
    std::cout << "PhoneNumber: " << contacts_arr[value - 1].get_Pnumber() << std::endl;
    std::cout << "DarkSecret: " << contacts_arr[value - 1].get_Dsecret() << std::endl;
    return ;
}