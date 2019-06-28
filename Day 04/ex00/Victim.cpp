/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:15:58 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/23 16:16:00 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
	_name = "Default";
	std::cout << "Some random victim called " << _name <<
		" just popped !" << std::endl;
}

Victim::Victim(std::string name)
{
	_name = name;
	std::cout << "Some random victim called " << _name <<
		" just popped !" << std::endl;
}

Victim::~Victim(void) // virtual ?
{
	std::cout << "Victim " << _name <<
		" just died for no apparent reason !" << std::endl;
}

std::string Victim::getName(void) const { return _name; }

std::ostream & operator<<(std::ostream & o, Victim const & src)
{
	o << "I am " << src.getName() << " and I like otters !" << std::endl;
	return (o);
}

void Victim::getPolymorphed(void) const
{
	std::cout << _name <<
		" has been turned into a cute little sheep !" << std::endl;
}

Victim & Victim::operator=(Victim const & src)
{
	if (this != &src)
	{
		_name = src._name;
	}
	return (*this);
}

Victim::Victim(Victim const & src)
{
	*this = src;
}
