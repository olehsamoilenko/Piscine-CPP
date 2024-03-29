/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:15:58 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/23 16:16:00 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	_name = name;
	_title = title;
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title
		<< ", is dead. Consequences will never be the same !" << std::endl;
}

std::string Sorcerer::getName(void) const { return _name; }
std::string Sorcerer::getTitle(void) const { return _title; }

std::ostream & operator<<(std::ostream & o, Sorcerer const & src)
{
	o << "I am " << src.getName() << ", " << src.getTitle()
		<< ", and I like ponies !" << std::endl;
	return (o);
}

void Sorcerer::polymorph(Victim const & src) const
{
	src.getPolymorphed();
}

Sorcerer & Sorcerer::operator=(Sorcerer const & src)
{
	if (this != &src)
	{
		_name = src._name;
		_title = src._title;
	}
	return (*this);
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
}
