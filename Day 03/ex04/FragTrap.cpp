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

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	// std::cout << "FR4G-TP " << _name << " constructed" << std::endl;
}

FragTrap::FragTrap(void)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	// std::cout << "Default FR4G-TP constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap::~FragTrap(void)
{
	// std::cout << "FR4G-TP " << _name << " destructed" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
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
		(this->*methods[rand() % 5])(target);
		std::cout << "* Current energy: " << _energyPoints
			<< " *" << std::endl;
	}
	else
		std::cout << "Not enough energy for vaulthunter.exe" << std::endl;
}

void FragTrap::_mechromagician(std::string const & target)
{
	std::cout << "Prepare to die, " << target << std::endl;
	std::cout << "Fly mini-trap! Fly!" << std::endl;
}

void FragTrap::_funzerker(std::string const & target)
{
	std::cout << "Prepare to die, " << target << std::endl;
	std::cout << "I'm a sexy dinosaur! Rawr!" << std::endl;
}

void FragTrap::_blightbot(std::string const & target)
{
	std::cout << "Prepare to die, " << target << std::endl;
	std::cout << "Burn them, my mini-phoenix!" << std::endl;
}

void FragTrap::_miniontrap(std::string const & target)
{
	std::cout << "Prepare to die, " << target << std::endl;
	std::cout << "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!" << std::endl;
}

void FragTrap::_rubberDucky(std::string const & target)
{
	std::cout << "Prepare to die, " << target << std::endl;
	std::cout << "Boiyoiyoiyoiyoing!" << std::endl;
}
