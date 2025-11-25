/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 02:22:22 by ehode             #+#    #+#             */
/*   Updated: 2025/11/25 02:52:44 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->type = "Hand";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon(void) {}

const std::string &Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}