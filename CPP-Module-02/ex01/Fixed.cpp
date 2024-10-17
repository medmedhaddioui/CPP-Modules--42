/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medmed <medmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:32:23 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/10/17 22:01:40 by medmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

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
    fixed_value = raw; 
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float number)
{
    std::cout << "Float constructor called" << std::endl;
}
float Fixed::toFloat() const
{
    return (0.0);
}
int Fixed::toInt () const 
{
    return 0;
}
