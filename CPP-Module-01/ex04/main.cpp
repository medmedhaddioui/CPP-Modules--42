/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hadd <mel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:15:37 by mel-hadd          #+#    #+#             */
/*   Updated: 2024/09/11 19:13:25 by mel-hadd         ###   ########.fr       */
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
    while (getline(infile, str))
    {
        index = (str.find(av[2]));
        if (index != std::string::npos)
        {
            std::string result = str.substr(0, index);
            result = result + av[3];
            std::string s = av[2];
            size_t len = index + s.length() ;
            result = result + str.substr(len , str.length() - len);
            outfile << result;   
        }
        else
            outfile << str << std::endl;
    }
    infile.close();
    outfile.close();
    return 0;
}