/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:34:40 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 14:34:42 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at "
		<< target.getName() << " *" << std::endl;
	AMateria::use(target);
}

Ice::Ice(void) : AMateria("ice")
{

}

Ice::~Ice(void)
{

}

Ice & Ice::operator=(Ice const & src)
{
	if (this != &src)
	{
		
	}
	return (*this);
}

Ice::Ice(Ice const & src)
{
	*this = src;
}
