/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 13:40:28 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 13:40:30 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{

}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist(void)
{

}

PowerFist & PowerFist::operator=(PowerFist const & src)
{
	if (this != &src)
		AWeapon::operator=(src);
	return (*this);
}

PowerFist::PowerFist(PowerFist const & src) :
	AWeapon(src.getName(), src.getAPCost(), src.getDamage())
{
	*this = src;
}
