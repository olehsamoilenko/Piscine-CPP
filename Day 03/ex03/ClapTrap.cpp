/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 20:49:09 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/26 20:49:11 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_hitPoints(0),
	_maxHitPoints(0),
	_energyPoints(0),
	_maxEnergyPoints(0),
	_level(0),
	_name("Default"),
	_meleeAttackDamage(0),
	_rangedAttackDamage(0),
	_armorDamageReduction(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	srand(clock());
}

ClapTrap::ClapTrap(std::string name) :
	_hitPoints(0),
	_maxHitPoints(0),
	_energyPoints(0),
	_maxEnergyPoints(0),
	_level(0),
	_name(name),
	_meleeAttackDamage(0),
	_rangedAttackDamage(0),
	_armorDamageReduction(0)
{
	std::cout << "ClapTrap " << _name << " constructed" << std::endl;
	srand(clock());
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " destructed" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
	if (this != &src)
	{
		_hitPoints = src._hitPoints;
		_maxHitPoints = src._maxHitPoints;
		_energyPoints = src._energyPoints;
		_maxEnergyPoints = src._energyPoints;
		_level = src._level;
		_name = src._name;
		_meleeAttackDamage = src._meleeAttackDamage;
		_rangedAttackDamage = src._rangedAttackDamage;
		_armorDamageReduction = src._armorDamageReduction;
	}
	return (*this);
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attacks " <<
	target << " at range, causing " << _rangedAttackDamage <<
	" points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attacks " <<
	target << " in melee, causing " << _meleeAttackDamage <<
	" points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= (unsigned)_armorDamageReduction)
		amount -= _armorDamageReduction;
	else
		amount = 0;
	if (amount >= (unsigned)_hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " taking " <<
	amount << " points of damage !" << std::endl;
	std::cout << "* Current hp: " << _hitPoints
			<< " *" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints || amount > (unsigned)_maxHitPoints)
		_hitPoints = _maxHitPoints;

	std::cout << "ClapTrap " << _name << " is repairing getting " <<
	amount << " hit points !" << std::endl;
	std::cout << "* Current hp: " << _hitPoints
			<< " *" << std::endl;
}
