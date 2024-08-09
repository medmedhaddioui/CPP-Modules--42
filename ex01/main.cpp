/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 22:25:33 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/08/05 16:32:17 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

class PhoneBook
{
public:
    std::string contacts_arr[8];
};

class Contact
{
public:
    std::string FirstName;
    std::string LastName;
    std::string Nickname;
    std::string PhoneNumber;
    std::string DarkSecret;
};

std::string read_line(std::string str, std::string str2)
{
    while (getline(std::cin, str))
    {
        if (!str.empty())
            return str;
        std::cout << str2;
    }
    if (str.empty())
    {
        std::cout << std::endl
                  << "PhoneBook Closed !!";
        exit(EXIT_SUCCESS);
    }
    return str;
}
int main()
{
    while (1)
    {
        int i;
        i = 0;
        std::string cmd_user;
        std::cout << "Please enter a command: ADD, SEARCH, or EXIT : ";
        if (!getline(std::cin, cmd_user) || !cmd_user.compare("EXIT"))
            exit(EXIT_SUCCESS);
        if (cmd_user.empty())
            continue;
        if (!cmd_user.compare("ADD"))
        {
            Contact new_contact;
            std::cout << "Please enter your FirstName: ";
            new_contact.FirstName = read_line(new_contact.FirstName, "Please enter your FirstName: ");
            std::cout << "Please " << new_contact.FirstName << " enter your LastName: ";
            new_contact.LastName = read_line(new_contact.LastName, "Please enter your LastName: ");
            std::cout << "Please " << new_contact.FirstName << " enter your Nickname: ";
            new_contact.Nickname = read_line(new_contact.Nickname, "Please enter your Nickname: ");
            std::cout << "Please " << new_contact.FirstName << " enter your PhoneNumber: ";
            new_contact.PhoneNumber = read_line(new_contact.PhoneNumber, "Please enter your PhoneNumber: ");
            std::cout << "Please " << new_contact.FirstName << " enter your DarkSecret: ";
            new_contact.DarkSecret = read_line(new_contact.DarkSecret, "Please enter your DarkSecret: ");
        }
        if (!cmd_user.compare("SEARCH"))
        {
            for(int i = 0; i < 40 ; i++)
                std::cout << "_";
            std::cout << std::endl;
        }
    }
    std::cout << std::endl
              << "PhoneBook Closed !!";
    return 0;
}
