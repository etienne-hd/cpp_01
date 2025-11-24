/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:41:21 by ehode             #+#    #+#             */
/*   Updated: 2025/11/24 20:53:06 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	// Test 1
	Zombie zombie1("mbatty");
	zombie1.announce();

	// Test 2
	Zombie *zombie2;
	zombie2 = newZombie("sabartho");
	zombie2->announce();
	delete zombie2;
	
	// Test 3
	randomChump("tlamit");
}