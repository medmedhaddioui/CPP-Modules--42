/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:35:53 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/09/10 22:49:15 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Logo
{
    std::string name;
    public: 
        Logo();
        Logo(std::string name);
        ~Logo();
        void print()
        {
            std::cout << name << std::endl ;
        }
};
Logo::Logo()
{
    std::cout << "First" << std::endl;
}
Logo::Logo(std::string name)
{
    this->name = name;
}
Logo::~Logo()
{
    std::cout << "I am Out !!" << std::endl;
}
int main ()
{
    Logo dacia;
    Logo BMW;
    dacia = BMW;
    std::cout << "Ending" << std::endl;
}