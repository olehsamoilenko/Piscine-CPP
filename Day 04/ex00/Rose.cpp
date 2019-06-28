/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rose.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:15:58 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/23 16:16:00 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rose.hpp"

Rose::Rose(void)
{
	_name = "Default";
	std::cout << "Rose Rose." << std::endl;
}

Rose::Rose(std::string name) : Victim(name)
{
	std::cout << "Rose Rose." << std::endl;
}

Rose::~Rose(void)
{
	std::cout << "Dead." << std::endl;
}

void Rose::getPolymorphed(void) const
{
	std::cout << _name <<
		" has been turned into a peon !" << std::endl;
}

Rose & Rose::operator=(Rose const & src)
{
	if (this != &src)
	{
		_name = src._name;
	}
	return (*this);
}

Rose::Rose(Rose const & src)
{
	*this = src;
}
