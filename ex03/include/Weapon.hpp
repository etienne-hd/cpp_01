/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 02:18:00 by ehode             #+#    #+#             */
/*   Updated: 2025/11/25 02:47:04 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		const std::string &getType(void);
		void setType(std::string type);
};

#endif