/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medmed <medmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:15:37 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/09/09 16:00:50 by medmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
int main (int ac, char **av)

{
    std::string str;
    if (ac != 4)
    {
        std::cerr << "Wrong Arguments" << std::endl;
        return 1;
    }    
    
    std::fstream infile(av[1], std::ios::in);
    if (!infile.is_open())
    {
        std::cerr << "error file open" << std::endl;
        return 1;
    }

    std::fstream outfile("fileout.replace", std::ios::out);
    if (!outfile.is_open())
    {
        std::cerr << "error file open" << std::endl;
        infile.close();
        return 1;
    }
    
    size_t index;  
    while (getline(infile, str))
    {
        index = (str.find(av[2]));
        if (index != std::string::npos)
        {
            str.insert(index, av[3]);
        }
            
        outfile << str << std::endl;
    }
    infile.close();
    outfile.close();
}