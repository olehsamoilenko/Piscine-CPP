/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:36:20 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/13 16:36:22 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & weapon) :
	_name(name),
	_weapon(weapon)
{

}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his "
		<< _weapon.getType() << std::endl;
}
