/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:53:25 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 14:53:27 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
	_name = name;
	_ap = 40;
	_weapon = NULL;
}

int Character::getAP(void) const
{
	return (_ap);
}

std::string Character::getName(void) const
{
	return (_name);
}

AWeapon * Character::getWeapon(void) const
{
	return (_weapon);
}

void Character::recoverAP(void)
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::attack(Enemy * enemy)
{
	if (_weapon == NULL)
		std::cout << "No weapon :(" << std::endl;
	else if (_ap < _weapon->getAPCost())
		std::cout << "Not enough AP :(" << std::endl;
	else if (enemy->getHP() == 0)
		std::cout << enemy->getType() << " dead :(" << std::endl;
	else
	{
		_ap -= _weapon->getAPCost();
		std::cout << _name << " attacks " << enemy->getType() <<
			" with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
		std::cout << enemy->getType() << ": " << enemy->getHP()
			<< "HP left" << std::endl;
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

void Character::equip(AWeapon * weapon)
{
	_weapon = weapon;
}

std::ostream & operator<<(std::ostream & o, Character const & src)
{
	o << src.getName() << " has " << src.getAP() << " AP and ";
	if (src.getWeapon() != NULL)
		o << "wields a " << src.getWeapon()->getName();
	else
		o << "is unarmed";
	o << std::endl;
	return (o);
}

Character::Character(void)
{

}

Character::~Character(void)
{

}

Character & Character::operator=(Character const & src)
{
	if (this != &src)
	{
		_name = src._name;
		_ap = src._ap;
		_weapon = src._weapon;
	}
	return (*this);
}

Character::Character(Character const & src)
{
	*this = src;
}
