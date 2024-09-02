/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 22:25:33 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/08/30 16:55:46 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook object;
    object.set_index();
    while (1)
    {
        std::string output_user;
        std::cout << "Please enter a command: ADD, SEARCH, or EXIT : ";
        if (!getline(std::cin, output_user) || !output_user.compare("EXIT"))
            object.EXIT();
        if (!output_user.compare("ADD"))
            object.ADD();
        if (!output_user.compare("SEARCH"))
            object.SEARCH();
    }
    return 0;
}




