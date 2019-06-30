/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 13:40:28 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 13:40:30 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{

}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle(void)
{

}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & src)
{
	if (this != &src)
		AWeapon::operator=(src);
	return (*this);
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) :
	AWeapon(src.getName(), src.getAPCost(), src.getDamage())
{
	*this = src;
}
