/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medmed <medmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:15:37 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/11/02 13:47:03 by medmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main (int ac, char **av)

{
    std::string str;
    if (ac != 4)
        return (std::cerr << "Wrong Arguments" << std::endl, 1);
    std::fstream infile(av[1], std::ios::in);
    if (!infile.is_open())
        return (std::cerr << "error file open" << std::endl ,1);

    std::string filename = std::string(av[1]) + ".replace";
    std::fstream outfile(filename.c_str(), std::ios::out);
    if (!outfile.is_open())
    {
        std::cerr << "error file open" << std::endl;
        infile.close();
        return 1;
    }
    size_t index;  
    std::string av2 = av[2];
    while (getline(infile, str))
    {
        while ((index = (str.find(av[2]))) !=  std::string::npos)
        {
            str.erase(index, av2.size());
            str.insert(index, av[3]);
        }   
        outfile << str << std::endl;
    }
    infile.close();
    outfile.close();
    return 0;
}