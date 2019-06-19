/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:44:50 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/19 13:44:52 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human h;

	h.action("meleeAttack", "enemy_1");
	h.action("rangedAttack", "enemy_2");
	h.action("intimidatingShout", "enemy_3");
	h.action("shoot", "enemy4");
	return (0);
}
