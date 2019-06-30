/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 22:27:01 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/29 22:27:03 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "BocalSteroid.hpp"
#include "AsteroBocal.hpp"

int main()
{
	MiningBarge *barge = new MiningBarge();
	IAsteroid *ast1 = new BocalSteroid();
	IAsteroid *ast2 = new AsteroBocal();
	IMiningLaser *las1 = new DeepCoreMiner();
	IMiningLaser *las2 = new StripMiner();

	//without laser
	barge->mine(ast1);

	std::cout << std::endl;
	
	//1 laser 1 target total 1 stting
	barge->equip(las1);
	barge->mine(ast2);

	std::cout << std::endl;
	//2 lasers 2 targets total 4 sttings
	barge->equip(las2);
	barge->mine(ast1);
	barge->mine(ast2);
	delete barge;
	delete ast1;
	delete ast2;
	delete las1;
	delete las2;
	return 0;
}