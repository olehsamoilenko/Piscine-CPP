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
	FragTrap ft("Oleh");
	ScavTrap st("Oleh");

	ft.meleeAttack("Taylor Kobb");
	st.meleeAttack("Taylor Kobb");
	ft.rangedAttack("Rakk Hive");
	st.rangedAttack("Rakk Hive");
	ft.takeDamage(60);
	st.takeDamage(60);
	ft.takeDamage(50);
	st.takeDamage(50);
	ft.beRepaired(40);
	st.beRepaired(40);
	ft.beRepaired(80);
	st.beRepaired(80);
	ft.vaulthunter_dot_exe("Baron Flynt");
	st.challengeNewcomer();
	ft.takeDamage(3);
	st.takeDamage(3);
	ft.takeDamage(10);
	st.takeDamage(10);
	ft.takeDamage(100);
	st.takeDamage(100);
	ft.takeDamage(-10);
	st.takeDamage(-10);
	ft.beRepaired(-10);
	st.beRepaired(-10);

	return (0);
}
