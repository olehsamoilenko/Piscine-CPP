/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 13:35:30 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 13:35:32 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

std::string AWeapon::getName(void) const { return (_name); }
int AWeapon::getDamage(void) const { return (_damage); }
int AWeapon::getAPCost(void) const { return (_APCost); }

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	_name = name;
	_APCost = apcost;
	_damage = damage;
}

AWeapon & AWeapon::operator=(AWeapon const & src)
{
	if (this != &src)
	{
		_name = src._name;
		_damage = src._damage;
		_APCost = src._APCost;
	}
	return (*this);
}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
}

AWeapon::AWeapon(void)
{

}

AWeapon::~AWeapon(void)
{

}
