/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 14:01:48 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/10/21 17:52:47 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "BasicTrap.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>

int	main(void) {
	srand(time(NULL));
	FragTrap	trapper;
	ScavTrap	claptrap("ClapTrap");

	
	trapper.rangedAttack("some target");
	claptrap.meleeAttack("you");
	
	trapper.takeDamage(4);

	claptrap.beRepaired(20);
	trapper.beRepaired(2);
	
	claptrap.challengeNewcomer("his nemesis");

	claptrap.ActualRangedAttack(trapper);
	trapper.ActualMeleeAttack(trapper);
}
