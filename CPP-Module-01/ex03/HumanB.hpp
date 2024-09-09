/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 22:08:21 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/09/08 17:47:15 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class HumanB
{
    private:
        std::string name;
        Weapon *club;
    public:
        void setWeapon(Weapon &club);
        void attack();
        HumanB(std::string name) : name(name), club(NULL) {};
        ~HumanB();
};

#endif