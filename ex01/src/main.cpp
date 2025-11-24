/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:41:21 by ehode             #+#    #+#             */
/*   Updated: 2025/11/24 22:56:43 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main()
{
	// Test 1
	Zombie *zombies1;

	zombies1 = zombieHorde(10, "mcolin");
	for (int i = 0; i < 10; i++)
		zombies1[i].announce();
	delete []zombies1;

	// Test 2
	Zombie *zombies2;

	zombies2 = zombieHorde(0, "npapashv");
	if (!zombies2)
		std::cout << "Cannot create zombies2 (0 zombies)" << std::endl;

	// Test 3
	Zombie *zombies3;

	zombies3 = zombieHorde(-10, "ykolacze");
	if (!zombies3)
		std::cout << "Cannot create zombies2 (-10 zombies)" << std::endl;
}