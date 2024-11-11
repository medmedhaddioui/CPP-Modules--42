/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:12:19 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/11 16:17:46 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


const int Fixed::fractional = 8;

Fixed::Fixed() 
{
    std::cout << "Default constructor called" << std::endl;
    fixed_value = 0;
}

Fixed:: Fixed (Fixed const &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed &orignal)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &orignal)
        this->fixed_value  = orignal.fixed_value;
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
    fixed_value = integer << fractional;
}

Fixed::Fixed(const float floatNumber)
{
    std::cout << "Float constructor called" << std::endl;
    fixed_value = roundf(floatNumber * (1 << fractional));
}

float Fixed::toFloat() const
{
    float valueFloat =  (float) fixed_value  / (1 << fractional);
    return valueFloat;
}

int Fixed::toInt () const 
{
    int valueInt = fixed_value >> fractional ;
    return valueInt;
}

std::ostream  &operator<< (std::ostream &out, Fixed  const &obj)
{
    out << obj.toFloat();
    return out;
}

// comparison
bool Fixed::operator>(Fixed const &objR) const
{
    if (this->toFloat() > objR.toFloat())
        return true;
    return false;
}

bool Fixed::operator<(Fixed const &objR) const
{
    if (this->toFloat() < objR.toFloat())
        return true;
    return false;
}

bool Fixed::operator>=(Fixed const &objR) const
{
    if (this->toFloat() >= objR.toFloat())
        return true;
    return false;
}
bool Fixed::operator<=(Fixed const &objR) const
{
    if (this->toFloat() <= objR.toFloat())
        return true;
    return false;
}
bool Fixed::operator==(Fixed const &objR) const
{
    if (this->toFloat() == objR.toFloat())
        return true;
    return false;
}
bool Fixed::operator!=(Fixed const &objR) const
{
    if (this->toFloat() != objR.toFloat())
        return true;
    return false;
}

//arithmetic
float Fixed::operator+(Fixed const &objR) const
{
    return (this->toFloat() + objR.toFloat());
}
float Fixed::operator-(Fixed const &objR) const
{
    return (this->toFloat() - objR.toFloat());
}
float Fixed::operator*(Fixed const &objR) const
{
    return (this->toFloat() * objR.toFloat());
}
float Fixed::operator/(Fixed const &objR) const
{
    return (this->toFloat() / objR.toFloat());
}

// Increm-Decre
Fixed Fixed::operator++()
{
    ++this->fixed_value;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed copyObj = *this;
    this->fixed_value++;
    return copyObj;
}
Fixed Fixed::operator--()
{
    --this->fixed_value;
    return *this;
}
Fixed Fixed::operator--(int)
{
    Fixed copyObj = *this;
    this->fixed_value--;
    return copyObj;
}

Fixed &Fixed::min (Fixed  &objL, Fixed &objR)
{
    if (objL < objR)
        return objL;
    return objR;
}

Fixed const &Fixed::min(Fixed const &objL, Fixed const &objR)
{
    if (objL < objR)
        return objL;
    return objR;
}

Fixed &Fixed::max (Fixed  &objL, Fixed &objR)
{
    if (objL > objR)
        return objL;
    return objR;
}

Fixed const &Fixed::max (Fixed const &objL, Fixed const &objR)
{
    if (objL > objR)
        return objL;
    return objR;
}
