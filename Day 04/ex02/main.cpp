/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 20:43:20 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 20:43:21 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

void func2()
{
	{
		Squad sq1;
		Squad sq2;
		sq2 = sq1;
	}
	{
		Squad sq1;
		Squad sq2;
		TacticalMarine *m1 = new TacticalMarine;
		TacticalMarine *m2 = new TacticalMarine;
		sq1.push(m1);
		sq1.push(m2);
		sq2 = sq1;
	}
}

void func(void)
{
	Squad sq1;
	Squad sq2;

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* ken = new TacticalMarine;
	ISpaceMarine* mark = new AssaultTerminator;
	
	sq1.push(bob);
	sq1.push(bob);
	sq1.push(jim);

	sq2.push(ken);
	sq2.push(mark);

	sq2 = sq1;

	for (int i = 0; i < sq2.getCount(); ++i)
		sq2.getUnit(i)->battleCry();
}

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "-------------------------------" << std::endl;
	func();
	std::cout << "-------------------------------" << std::endl;
	func2();

	system("leaks squad");
	
	return 0;
}
