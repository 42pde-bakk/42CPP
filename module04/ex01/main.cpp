/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:38:51 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 16:31:10 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "Club.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "BigUglyDragon.hpp"

#include <string>
#include <iostream>

void	myowntest() {
	Character*	feskir = new Character("feskir");
	AWeapon*	pf = new PowerFist();
	AWeapon*	cluberino = new Club();
	Enemy*		supertf = new SuperMutant();
	Enemy*		scorp = new RadScorpion();
	Enemy*		dragon = new BigUglyDragon();

	feskir->equip(pf);
	std::cout << *feskir;
	
	while (supertf->getHP() > 0) {
		feskir->attack(supertf);
		if (feskir->getAP() < feskir->getWeapon()->getAPCost())
			feskir->recoverAP();
	}
	
	scorp->takeDamage(81);
	std::cout << scorp->getHP() << " hp" << std::endl;
	feskir->equip(cluberino);
	feskir->attack(dragon);
	std::cout << dragon->getHP() << " hp" << std::endl;

	delete feskir; delete pf; delete cluberino; delete dragon; delete scorp;
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
	delete me; delete pr; delete pf;
	return 0;
}

int	main( void) {
	myowntest();
	// subject_test();
	// system("leaks fire.out");
}
