/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 13:35:41 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/10 13:01:36 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>
#include <string>

int subject_test()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");

	AMateria* tmp;
	AMateria* tmp2;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	delete tmp;
	delete tmp2;
	return 0;
}

int	peer_test() {
	IMateriaSource* source = new MateriaSource();
	Character	peer("peer");
	Character	jimbo("jimbo");
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());

	AMateria* tmp;
	AMateria* tmp2;
	tmp = source->createMateria("ice");
	peer.equip(tmp);
	
	tmp2 = source->createMateria("cure");
	jimbo.equip(tmp2);
	for (int i = 0; i < 3; i++) {
		peer.use(0, jimbo);
		jimbo.use(0, jimbo);
	}
	peer.use(2, jimbo);
	peer.unequip(0);
	jimbo.unequip(0);
	jimbo.unequip(0);
	for (int i = 0; i < 3; i++) {
		peer.use(0, jimbo);
		jimbo.use(0, jimbo);
	}
	delete tmp;
	delete tmp2;
	delete source;
	return 0;
}

int	main( void) {
	subject_test();
	peer_test();
	// system("leaks bocal-fantasy.out");
	return 0;
}
