/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BulletGun.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 13:40:28 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 13:40:30 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BulletGun.hpp"

BulletGun::BulletGun(void) : AWeapon("Bullet Gun", 20, 100)
{

}

void BulletGun::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

BulletGun::~BulletGun(void)
{

}

BulletGun & BulletGun::operator=(BulletGun const & src)
{
	if (this != &src)
		AWeapon::operator=(src);
	return (*this);
}

BulletGun::BulletGun(BulletGun const & src) :
	AWeapon(src.getName(), src.getAPCost(), src.getDamage())
{
	*this = src;
}
