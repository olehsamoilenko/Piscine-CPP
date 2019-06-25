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

#include "ZombieEvent.hpp"

int		main(void)
{
	Zombie z1 = Zombie("Oleh", "ugly");

	ZombieEvent e;

	Zombie *z2 = e.newZombie("Anton");
	z2->announce();
	delete z2;

	e.setZombieType("agressive");

	int i = -1;
	while (++i < 5)
	{
		z2 = e.randomChump();
		delete z2;
	}

	return (0);
}