/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:34:40 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 14:34:42 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName()
		<< "'s wounds *" << std::endl;
	AMateria::use(target);
}

Cure::Cure(void) : AMateria("cure")
{

}

Cure::~Cure(void)
{

}

Cure & Cure::operator=(Cure const & src)
{
	if (this != &src)
	{
		
	}
	return (*this);
}

Cure::Cure(Cure const & src)
{
	*this = src;
}
