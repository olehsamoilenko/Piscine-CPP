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

#define ARRAY_LEN(arr) (sizeof(arr) / sizeof(*arr))

std::string names[] = {
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
	srand(time(NULL));
}

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, _type));
}

Zombie	*ZombieEvent::randomChump()
{
	Zombie *z = newZombie(names[rand() % ARRAY_LEN(names)]);
	z->announce();
	return (z);
}