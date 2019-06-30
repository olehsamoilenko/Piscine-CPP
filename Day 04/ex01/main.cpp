/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:27:38 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/28 14:27:40 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "BulletGun.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Beast.hpp"

int main()
{
	// basic
	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	std::cout << "-------------------------------------------" << std::endl;

	// attacking after dying
	zaz->recoverAP();
	zaz->recoverAP();
	zaz->recoverAP();
	zaz->recoverAP();
	zaz->equip(pf);
	SuperMutant * mutant = new SuperMutant();
	zaz->attack(mutant);
	zaz->attack(mutant);
	std::cout << "-------------------------------------------" << std::endl;

	// new derived classes
	Beast * beast = new Beast();
	BulletGun * gun = new BulletGun();
	zaz->equip(gun);
	zaz->attack(beast);

	// deleting
	delete pr;
	delete pf;
	delete gun;

	return 0;
}
