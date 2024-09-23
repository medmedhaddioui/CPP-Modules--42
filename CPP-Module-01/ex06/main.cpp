/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:41:34 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/09/10 19:00:27 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main (int ac, char **av)
{
    if (ac != 2)
        return (std::cerr << "Wrong arguments" << std::endl , 1);
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (str[i] == av[1])
            break;
        i++;
    }
    Harl say;
    switch (i)
    {
        case 0:
            say.complain("DEBUG");
        case 1:
            say.complain("INFO");
        case 2:
            say.complain("WARNING"); 
        case 3:
            say.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}