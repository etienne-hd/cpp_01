/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:41:21 by ehode             #+#    #+#             */
/*   Updated: 2025/12/11 14:51:33 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	// Test
	Harl harl = Harl();

	std::cout << "_-- DEBUG --_" << std::endl << std::endl;
	harl.complain("DEBUG");
	std::cout << "_-- INFO --_" << std::endl << std::endl;
	harl.complain("INFO");
	std::cout << "_-- WARNING --_" << std::endl << std::endl;
	harl.complain("WARNING");
	std::cout << "_-- ERROR --_" << std::endl << std::endl;
	harl.complain("ERROR");
	std::cout << "_-- NOT LEVEL --_" << std::endl << std::endl;
	harl.complain("gaeducas");

	return (0);
}