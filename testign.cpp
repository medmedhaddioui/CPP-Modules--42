/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testign.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:21:00 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/10/22 22:26:28 by mel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Simple
{
    private:
        int a;
    public:
    Simple (int a) : a(a) {};
    int getter()
    {
        return a;
    }
};
int main ()
{
    Simple boy(5);
    
    Simple boy2(11);

    boy = boy2;
    std::cout << boy.getter() << std::endl;
    std::cout << boy2.getter()<< std::endl;
}