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

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & src)
{
	if (this != &src)
	{
		_name = src._name;
		_damage = src._damage;
		_APCost = src._APCost;
	}
	return (*this);
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
{
	*this = src;
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle(void)
{

}
