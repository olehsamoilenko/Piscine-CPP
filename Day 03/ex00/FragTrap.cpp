/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 11:39:03 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/21 11:39:04 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " <<
	target << " at range, causing " << _rangedAttackDamage <<
	" points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << " attacks " <<
	target << " in melee, causing " << _meleeAttackDamage <<
	" points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	amount -= _armorDamageReduction;
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;

	std::cout << "FR4G-TP " << _name << " taking " <<
	amount << " points of damage !" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;

	std::cout << "FR4G-TP " << _name << " is repairing getting " <<
	amount << " points of damage !" << std::endl;
}

typedef void (FragTrap::*func_ptr)(std::string const &);

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (_energyPoints >= 25)
	{
		
		_energyPoints -= 25;
		if (_energyPoints < 0)
			_energyPoints = 0;
		
		func_ptr methods[] = {
			&FragTrap::_mechromagician,
			&FragTrap::_funzerker,
			&FragTrap::_blightbot,
			&FragTrap::_miniontrap,
			&FragTrap::_rubberDucky
		};
		// srand(time(NULL));
		(this->*methods[rand() % 5])(target);
	}
	else
	{
		std::cout << "Not enough energy for vaulthunter.exe" << std::endl;
	}
}

void FragTrap::_mechromagician(std::string const & target)
{
	std::cout << "Fly mini-trap! Fly!" << std::endl;
}

void FragTrap::_funzerker(std::string const & target)
{
	std::cout << "I'm a sexy dinosaur! Rawr!" << std::endl;
}

void FragTrap::_blightbot(std::string const & target)
{
	std::cout << "Burn them, my mini-phoenix!" << std::endl;
}

void FragTrap::_miniontrap(std::string const & target)
{
	std::cout << "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!" << std::endl;
}

void FragTrap::_rubberDucky(std::string const & target)
{
	std::cout << "Boiyoiyoiyoiyoing!" << std::endl;
}

FragTrap::FragTrap(void) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_level(1),
	_name("Default Frag"),
	_meleeAttackDamage(30),
	_rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << _name << " constructed" << std::endl;
}

FragTrap::FragTrap(std::string name) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_level(1),
	_name(name),
	_meleeAttackDamage(30),
	_rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << _name << " constructed" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << _name << " destructed" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
{
	if (this != &src)
	{
		_hitPoints = src.getHitPoints();
		_maxHitPoints = src.getMaxHitPoints();
		_energyPoints = src.getEnergyPoints();
		_maxEnergyPoints = src.getMaxEnergyPoints();
		_level = src.getLevel();
		_name = src.getName();
		_meleeAttackDamage = src.getMeleeAttackDamage();
		_rangedAttackDamage = src.getRangedAttackDamage();
		_armorDamageReduction = src.getArmorDamageReduction();
	}
	return (*this);
}

int FragTrap::getHitPoints(void) const { return _hitPoints; }
int FragTrap::getMaxHitPoints(void) const { return _maxHitPoints; }
int FragTrap::getEnergyPoints(void) const { return _energyPoints; }
int FragTrap::getMaxEnergyPoints(void) const { return _maxEnergyPoints; }
int FragTrap::getLevel(void) const { return _level; }
std::string FragTrap::getName(void) const { return _name; }
int FragTrap::getMeleeAttackDamage(void) const { return _meleeAttackDamage; }
int FragTrap::getRangedAttackDamage(void) const { return _rangedAttackDamage; }
int FragTrap::getArmorDamageReduction(void) const { return _armorDamageReduction; }
