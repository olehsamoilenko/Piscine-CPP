/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 12:08:27 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/25 12:08:29 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

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

ZombieHorde::ZombieHorde(int n)
{
	_n = n;
	_horde = new Zombie[_n];
	srand(clock());
	int i = -1;
	while (++i < _n)
		_horde[i].setName(names[rand() % names->length()]);
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] _horde;
}

void ZombieHorde::announce(void)
{
	int i = -1;
	while (++i < _n)
		_horde[i].announce();
}
