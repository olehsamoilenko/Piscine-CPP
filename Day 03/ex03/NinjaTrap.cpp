/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 19:18:02 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/27 19:18:04 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	// std::cout << "NINJA-TP " << _name << " constructed" << std::endl;
}

NinjaTrap::NinjaTrap(void)
{
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	// std::cout << "Default NINJA-TP constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
	*this = src;
}

NinjaTrap::~NinjaTrap(void)
{
	// std::cout << "NINJA-TP " << _name << " destructed" << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & src)
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

void NinjaTrap::ninjaShoebox(ClapTrap trap)
{
	std::cout << "NNJ-TP " << _name << " making ClapTrap knocked out!" << std::endl;
	trap.takeDamage(_meleeAttackDamage);
}

void NinjaTrap::ninjaShoebox(FragTrap trap)
{
	std::cout << "NNJ-TP " << _name << " making ClapTrap knocked out!" << std::endl;
	trap.takeDamage(_meleeAttackDamage);
}

void NinjaTrap::ninjaShoebox(ScavTrap trap)
{
	std::cout << "NNJ-TP " << _name << " making ClapTrap knocked out!" << std::endl;
	trap.takeDamage(_meleeAttackDamage);
}

void NinjaTrap::ninjaShoebox(NinjaTrap trap)
{
	std::cout << "NNJ-TP " << _name << " making ClapTrap knocked out!" << std::endl;
	trap.takeDamage(_meleeAttackDamage);
}