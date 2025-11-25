/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 02:18:00 by ehode             #+#    #+#             */
/*   Updated: 2025/11/25 02:56:33 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"
#include <string>

class HumanA
{
	private:
		Weapon *weapon;
		std::string name;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void attack(void);
};

#endif