/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:41:21 by ehode             #+#    #+#             */
/*   Updated: 2025/11/25 17:59:19 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
#include "replace.hpp"

int	main(int argc, char **argv)
{
	std::string buffer;
	std::string	fileOutPath;

	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::ifstream fileIn(argv[1]);
	if (!fileIn.is_open())
	{
		std::cerr << argv[1] << ": " << std::strerror(errno) << std::endl;
		return (1);
	}
	fileOutPath.append(argv[1]);
	fileOutPath.append(".replace");
	std::ofstream fileOut(fileOutPath.c_str());
	if (!fileOut.is_open())
	{
		fileIn.close();
		std::cerr << fileOutPath << ": " << std::strerror(errno) << std::endl;
		return (1);
	}
	while (std::getline(fileIn, buffer))
		fileOut << ft_replace(buffer, argv[2], argv[3]) << std::endl;
	fileIn.close();
	fileOut.close();
	return (0);
}