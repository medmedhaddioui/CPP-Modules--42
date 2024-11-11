/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:29:09 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/11 19:00:02 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Point.hpp"

// A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2 
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    if (point == a || point == b || point == c)
        return false;
    float all = Point::areaCal(a , b , c);
    float A = Point::areaCal(a , b , point);
    float B = Point::areaCal(a , point , c);
    float C = Point::areaCal(point , b , c);
    if (A == 0 || B == 0 || C == 0)
        return false;
    if (all == (A + B + C))
        return true;
    else
        return false;
}
