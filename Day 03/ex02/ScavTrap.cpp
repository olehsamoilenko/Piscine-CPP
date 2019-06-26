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