/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medmed <medmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:12:23 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/09/09 18:11:30 by medmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl 
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        void complain( std::string level);
};

#endif