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

void	func(Zombie z)
{
	z.announce();
}

int		main(void)
{
	Zombie z1 = Zombie("Oleh", "ugly");
	Zombie z2 = Zombie("Vadim", "smart");

	std::cout << "Going to func..." << std::endl;
	func(z1);
	std::cout << "Going from func..." << std::endl;

	ZombieEvent e;
	Zombie *z3 = e.newZombie("Anton");
	z3->announce();

	e.setZombieType("agressive");

	int i = -1;
	while (++i < 3)
	{
		Zombie *z4 = e.randomChump();
		delete z4;
	}

	system("leaks zombie");
	return (0);
}