/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:36:20 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/13 16:36:22 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony oleh = Pony("Oleh", 62.5);
}

void	ponyOnTheHeap(void)
{
	Pony *vadim = new Pony("Vadim", 75.2);
}

int		main(void)
{
	ponyOnTheStack();

	ponyOnTheHeap();

	system("leaks pony");

	return (0);
}