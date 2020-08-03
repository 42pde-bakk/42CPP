/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:38:51 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 18:03:16 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

#include <string>
#include <iostream>

void	myowntest() {
	Character	feskir;
	PowerFist	pf;
	SuperMutant	supertf;
	RadScorpion	scorp;

	feskir.equip(&pf);
	std::cout << feskir;
	
	while (supertf.getHP() > 0) {
		feskir.attack(&supertf);
		while (feskir.getAP() < feskir.getWeapon()->getAPCost())
			feskir.recoverAP();
	}
	
	scorp.takeDamage(82);
	scorp.getHP();
	scorp.takeDamage(10);
}

int	subject_test() {
	Character* me = new Character("me");
	std::cout << *me;

	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	delete me; delete b; delete pr; delete pf;
	return 0;
}

int	main( void) {
	myowntest();
	// subject_test();
	system("leaks fire.out");
}
