/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:12:45 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/11 18:03:03 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
    Point a(Fixed(2), Fixed(3));
    Point b(Fixed(4), Fixed(5));
    Point c(Fixed(6), Fixed(2));
    Point point(Fixed(2), Fixed(3));
    if (bsp (a , b , c ,point))
        std::cout << "inside" << std::endl;
    else 
        std::cout << "outside" << std::endl;   
    return 0;
}