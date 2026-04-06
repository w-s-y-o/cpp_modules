/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 12:30:18 by wintoo            #+#    #+#             */
/*   Updated: 2026/03/30 13:18:42 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	replace_str(std::string s1, std::string s2, std::string line)
{
	size_t	pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos += s2.length();
	}
	return (line);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "<filename> <s1> <s2>" << std::endl, 1);

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::ifstream	infile;
	std::ofstream	outfile;

	if (s1.empty())
		return (std::cerr << "s1 cannot be empty" << std::endl, 1);
	infile.open(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error opening infile!" << std::endl;
		return (1);
	}
	outfile.open((filename + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error creating outfile!" << std::endl;
		return (1);
	}

	std::string	line;
	while (std::getline(infile, line))
	{
		outfile << replace_str(s1, s2, line);
		if (!infile.eof())
			outfile << '\n';
	}
	return (0);
}
