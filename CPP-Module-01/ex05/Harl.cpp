/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medmed <medmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:30:45 by medmed            #+#    #+#             */
/*   Updated: 2024/09/09 18:10:45 by medmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[DEBUG] level :" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info()
{
    std::cout << "[INFO] level :" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money."
               << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning()
{
    std::cout << "[WARNING] level :" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for"
            << "years whereas you started working here since last month." << std:: endl;
}
void Harl::error()
{
    std::cout << "[ERROR] level :" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain( std::string level)
{
    void (Harl::*PtrFunc[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string str[4] = {"INFO", "ERROR" ,"DEBUG","WARNING"};
    for (int i = 0; i < 4; i++)
    {
        if (level == str[i])
            (this->*PtrFunc[i])();
    }
}
