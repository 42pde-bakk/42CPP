/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/02 14:01:48 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/02 16:26:25 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

int	main(void) {
	srand(time(NULL));
	FragTrap	trapper;
	FragTrap	claptrap("ClapTrap");

	
	trapper.rangedAttack("some target");
	claptrap.meleeAttack("you");
	
	trapper.takeDamage(4);

	claptrap.beRepaired(20);
	trapper.beRepaired(2);
	
	claptrap.vaulthunter_dot_exe("his nemesis");

	claptrap.ActualRangedAttack(trapper);
	trapper.ActualMeleeAttack(trapper);
}
