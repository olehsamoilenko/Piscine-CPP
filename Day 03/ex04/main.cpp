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

#include "SuperTrap.hpp"

int		main(void)
{
	SuperTrap st("Oleh");
	st.vaulthunter_dot_exe("enemy_1");
	st.ninjaShoebox(ClapTrap("enemy_2"));
	return (0);
}
