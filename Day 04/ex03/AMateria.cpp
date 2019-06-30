/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:34:40 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 14:34:42 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	type_ = type;
	xp_ = 0;
}

void AMateria::use(ICharacter & target)
{
	xp_ += 10; // target ??
	std::cout << target.getName() << " currect xp: " << xp_ << std::endl;
}

std::string const & AMateria::getType() const
{
	return (type_);
}

AMateria::AMateria(void)
{
	
}

AMateria::~AMateria(void)
{

}

AMateria & AMateria::operator=(AMateria const & src)
{
	if (this != &src)
	{
		xp_ = src.xp_;
	}
	return (*this);
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}
