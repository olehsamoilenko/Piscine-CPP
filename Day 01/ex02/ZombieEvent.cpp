/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:36:20 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/13 16:36:22 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

const std::string names[] = {
	"Artem",
	"Borys",
	"Carl",
	"Denis",
	"Elran",
	"Frank",
	"Georgy",
	"Hleb",
	"Ilya",
	"Jack"
};

ZombieEvent::ZombieEvent(void)
{
	_type = "default";
	srand(clock());
}

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) const
{
	return (new Zombie(name, _type));
}

Zombie	*ZombieEvent::randomChump(void) const
{
	Zombie *z = newZombie(names[rand() % names->length()]);
	z->announce();
	return (z);
}