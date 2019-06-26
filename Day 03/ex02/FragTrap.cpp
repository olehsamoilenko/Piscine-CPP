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