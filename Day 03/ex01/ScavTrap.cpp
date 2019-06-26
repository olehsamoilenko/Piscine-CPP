/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 20:00:44 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/26 20:00:45 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SCAV-TP " << _name << " attacks " <<
	target << " at range, causing " << _rangedAttackDamage <<
	" points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SCAV-TP " << _name << " attacks " <<
	target << " in melee, causing " << _meleeAttackDamage <<
	" points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
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
	std::cout << "SCAV-TP " << _name << " taking " <<
	amount << " points of damage !" << std::endl;
	std::cout << "* Current hp: " << _hitPoints
			<< " *" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints || amount > (unsigned)_maxHitPoints)
		_hitPoints = _maxHitPoints;

	std::cout << "SCAV-TP " << _name << " is repairing getting " <<
	amount << " hit points !" << std::endl;
	std::cout << "* Current hp: " << _hitPoints
			<< " *" << std::endl;
}

typedef void (ScavTrap::*func_ptr)(void);

void ScavTrap::challengeNewcomer(void)
{
	func_ptr methods[] = {
		&ScavTrap::_chests,
		&ScavTrap::_kill,
		&ScavTrap::_corrode,
		&ScavTrap::_money,
		&ScavTrap::_vechile
	};
	(this->*methods[rand() % 5])();
}

void ScavTrap::_chests(void)
{
	std::cout << "Challenge: Open treasure chests." << std::endl;
}

void ScavTrap::_kill(void)
{
	std::cout << "Challenge: Kill marauders." << std::endl;
}

void ScavTrap::_corrode(void)
{
	std::cout << "Challenge: Deal corrode damage." << std::endl;
}

void ScavTrap::_money(void)
{
	std::cout << "Challenge: Sell items to vending machines." << std::endl;
}

void ScavTrap::_vechile(void)
{
	std::cout << "Challenge: Kill enemies by ramming them with a vehicle." << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(50),
	_maxEnergyPoints(50),
	_level(1),
	_name(name),
	_meleeAttackDamage(20),
	_rangedAttackDamage(15),
	_armorDamageReduction(3)
{
	std::cout << "SCAV-TP " << _name << " constructed" << std::endl;
	srand(clock());
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SCAV-TP " << _name << " destructed" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
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
