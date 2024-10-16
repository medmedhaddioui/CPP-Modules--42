/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medmed <medmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:32:23 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/10/16 15:49:16 by medmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::value = 8;

Fixed::Fixed() 
{
    std::cout << "Default constructor called" << std::endl;
    fixed_value = 0;
}
Fixed::Fixed(Fixed &orignal)
{
    std::cout << "Copy constructor called" << std::endl;
    fixed_value = orignal.fixed_value;
}
Fixed& Fixed::operator=(const Fixed &orignal)
{
    std::cout << "Copy assignment operator called" << std::endl;
    fixed_value  = orignal.fixed_value;
    return  *this;
}
Fixed:: ~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixed_value;
}

void Fixed::setRawBits( int const raw ) 
{
    fixed_value = raw; // edited;
}
