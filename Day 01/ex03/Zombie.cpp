/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:36:20 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/13 16:36:22 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	_type = "default";
}

Zombie::~Zombie(void)
{
	std::cout << _name << " dead." << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << _name << " (" << _type << ")"
		<< "> Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}