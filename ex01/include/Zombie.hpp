/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:36:51 by ehode             #+#    #+#             */
/*   Updated: 2025/11/24 21:42:25 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(void);
		Zombie(const std::string &name);
		~Zombie(void);
		void setName(const std::string &name);
		void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif