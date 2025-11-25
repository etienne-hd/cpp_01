/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehode <ehode@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:00:01 by ehode             #+#    #+#             */
/*   Updated: 2025/11/25 17:59:15 by ehode            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

std::string ft_replace(std::string s, std::string oldValue, std::string newValue)
{
	size_t i;

	if (oldValue.length() == 0)
		return (s);
	i = 0;
	while (s[i])
	{
		if (s.compare(i, oldValue.length(), oldValue) == 0)
		{
			s.erase(i, oldValue.length());
			s.insert(i, newValue);
			i += newValue.length();
		}
		else
			i++;
	}
	return (s);
}