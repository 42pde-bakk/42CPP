/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 12:10:23 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/05 16:04:19 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>
#include <string>

int subjecttest() {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i) {
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;	
}

int myowntest() {
	ISpaceMarine*	arr[50];
	bzero(arr, sizeof(ISpaceMarine*) * 50);
	Squad*			squadgoals = new Squad(50);
	for (int i = 0; i < 50; i++) {
		int ret = rand() % 3;
		if (ret == 2)
			arr[i] = new TacticalMarine;
		else if (ret == 1 && i > 0)
			arr[i] = arr[i - 1]->clone();
		else
			arr[i] = new AssaultTerminator;
		squadgoals->push(arr[i]);
	}
	for (int i = 0; i < 50; i++) {
		arr[i]->battleCry();
	}
	std::cout << "before deleting squadgoals" << std::endl;
	delete squadgoals; //weeeeeh my squad goals :(
	std::cout << "before deleting squadgoals" << std::endl;

	return 0;
}

int	main( void) {
	srand(time(NULL));
	// subjecttest();
	myowntest();
	system("leaks squad.out");
	return 0;
}
