/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 02:18:00 by ehode             #+#    #+#             */
/*   Updated: 2025/11/25 02:57:21 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"
#include <string>

class HumanB
{
	private:
		Weapon *weapon;
		std::string name;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void setWeapon(Weapon &weapon);
		void attack(void);
};

#endif