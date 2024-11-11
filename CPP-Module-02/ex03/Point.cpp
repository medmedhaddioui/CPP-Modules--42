/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:43:35 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/11 18:53:20 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::~Point()
{
    std::cout << "Destructor called" << std::endl;
}

Point &Point::operator=(Point const &obj)
{
    (void) obj;
    return *this;
}

float Point::getX () const
{
    return x.toFloat();
}

float Point::getY () const
{
    return y.toFloat();
}

bool Point::operator==(Point const &objR) const 
{
    // std::cout << objR.x << std::endl;
    // std::cout << objR.y << std::endl;
    // std::cout << this->x << std::endl;
    // std::cout << this->y << std::endl;

    if (this->x == objR.x && this->y == objR.y)
        return true;
    return false;
}

float Point::areaCal(Point  const &obj1, Point  const &obj2, Point const &obj3)
{
    return (std::abs((obj1.getX() * (obj2.getY() - obj3.getY())
         + obj2.getX() * (obj3.getY() - obj1.getY()) 
         + obj3.getX() * (obj1.getY() - obj2.getY())) / 2 )); // edit
}
