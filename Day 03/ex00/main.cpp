/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 11:39:14 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/21 11:39:16 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap ft1("Oleh");

	ft1.meleeAttack("Taylor Kobb");
	ft1.rangedAttack("Rakk Hive");

	ft1.takeDamage(60);
	ft1.takeDamage(50);

	ft1.beRepaired(40);
	ft1.beRepaired(80);

	int i = -1;
	while (++i < 5)
		ft1.vaulthunter_dot_exe("Baron Flynt");

	return (0);
}
