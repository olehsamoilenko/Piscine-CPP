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

int		main(void)
{
	FragTrap ft("Oleh Frag");
	ScavTrap st("Oleh Scav");
	ClapTrap ct("Oleh Clap");

	ft.meleeAttack("Taylor Kobb");
	st.meleeAttack("Taylor Kobb");
	ct.meleeAttack("Taylor Kobb");

	ft.rangedAttack("Rakk Hive");
	st.rangedAttack("Rakk Hive");
	ct.rangedAttack("Rakk Hive");

	ft.takeDamage(60);
	st.takeDamage(60);
	ct.takeDamage(60);

	ft.beRepaired(40);
	st.beRepaired(40);
	ct.beRepaired(40);
	
	ft.vaulthunter_dot_exe("Baron Flynt");
	st.challengeNewcomer();

	return (0);
}
