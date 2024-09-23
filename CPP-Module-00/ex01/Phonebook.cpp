/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 22:16:38 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/09/10 21:50:24 by mel-hadd         ###   ########.fr       */
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
    std::cout << std::endl << "PhoneBook Closed !!";
    exit(EXIT_SUCCESS);
}

void PhoneBook::set_index()
{
    index = 0;
}

void PhoneBook::ADD ()
{
    int save = -1;
    if (index >= 8)
    {
        save = index;
        index -= 8;
    }
    std::string str;
    contacts_arr[index].set_Fname(read_cmd("enter your FirstName: "));
    contacts_arr[index].set_Lname(read_cmd(" enter your LastName: "));
    contacts_arr[index].set_Nname(read_cmd(" enter your Nickname: "));
    contacts_arr[index].set_Pnumber(read_cmd(" enter your PhoneNumber: "));
    contacts_arr[index].set_Dsecret(read_cmd(" enter your DarkSecret: "));
    std::cout << contacts_arr[index].get_Fname() << " successfully added to phonebook [" << index + 1 << "/8]" << std::endl;
    if (save != -1)
        index = save;
    index++;
}

void PhoneBook::EXIT()
{
    std::cout << std::endl << "PhoneBook Closed !!";
    exit (EXIT_SUCCESS);
}

void PhoneBook::SEARCH()
{
    // Starting INDEX....
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

    //Info Contacts

    for (int current_i = 0; current_i < index && current_i < 8; current_i++)
    {
        std::stringstream convert;
        std::string index_as_str;
        convert << current_i + 1;
        index_as_str = convert.str();
        std::string info[4] = {index_as_str, contacts_arr[current_i].get_Fname(),
        contacts_arr[current_i].get_Lname(),contacts_arr[current_i].get_Nname()};
        for (int i = 0; i < 4; i++)
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

    // Issue case (Empty)
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
    // Select Index 
    
    std::string index_selected;
    std::cout << "Select index : ";
    int value ;
    bool valid = false;
    while (getline(std::cin, index_selected))
    {
        if (index_selected.find_first_not_of("0123456789") == std::string::npos)
            valid = true;
        if (valid)
        {
            std::stringstream convert(index_selected);
            convert >> value;
            if (!index_selected.empty() && value > 0 && value <= index && value <= 8)
                break;
        }
        std::cout << "Invalid index !" << std::endl;
        std::cout << "Select index : " ;
        valid = false;
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