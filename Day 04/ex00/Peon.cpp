/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:15:58 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/23 16:16:00 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
	_name = "Default";
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const
{
	std::cout << _name <<
		" has been turned into a pink pony !" << std::endl;
}

Peon & Peon::operator=(Peon const & src)
{
	if (this != &src)
	{
		_name = src._name;
	}
	return (*this);
}

Peon::Peon(Peon const & src)
{
	*this = src;
}
