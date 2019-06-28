/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:15:41 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/23 16:15:45 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Rose.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "------------------------" << std::endl;
	Victim *p = new Peon("Oleh");
	delete p;
	std::cout << "------------------------" << std::endl;
	Rose *r1 = new Rose("Flower");
	delete r1;
	std::cout << "------------------------" << std::endl;
	Victim *r2 = new Rose("Flower");
	delete r2;
	std::cout << "------------------------" << std::endl;

	

	return 0;
}
