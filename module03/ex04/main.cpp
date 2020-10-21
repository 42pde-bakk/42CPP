/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 14:01:48 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/10/21 17:53:49 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

int	main(void) {
	srand(time(NULL));
	SuperTrap	supertf("Matthew Delisi");

	SuperTrap Sam(supertf);
	std::cout << "divide line" << std::endl;
	// Sam = supertf;

	// supertf.ninjaShoebox(supertf);
	// std::cout << std::endl;
	// FragTrap	trapper;
	// ScavTrap	claptrap("ClapTrap");
	// NinjaTrap	Yuto("Yuto");

	
	// trapper.rangedAttack("some target");
	// claptrap.meleeAttack("you");
	
	// trapper.takeDamage(4);

	// claptrap.beRepaired(20);
	// trapper.beRepaired(2);
	
	// claptrap.challengeNewcomer("his nemesis");

	// claptrap.ActualRangedAttack(trapper);
	// trapper.ActualMeleeAttack(trapper);

	// Yuto.ninjaShoebox(Yuto);
}
