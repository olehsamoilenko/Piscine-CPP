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
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	NinjaTrap k("Kicker");

	ClapTrap ct("Oleh Clap");
	FragTrap ft("Oleh Frag");
	ScavTrap st("Oleh Scav");
	NinjaTrap nt("Oleh Ninja");

	k.ninjaShoebox(ct);
	k.ninjaShoebox(ft);
	k.ninjaShoebox(st);
	k.ninjaShoebox(nt);

	return (0);
}
