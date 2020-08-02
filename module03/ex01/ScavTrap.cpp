/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:55:17 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/02 17:42:58 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#define reset "\033[0m"

ScavTrap::ScavTrap( ) : BasicTrap("ScavTP", "Scav") {
}

ScavTrap::ScavTrap(const std::string name ) : BasicTrap("ScavTP", name) {
	_ep = 50;
	_maxep = 50;
	_melee_dmg = 20;
	_ranged_dmg = 15;
	_armor_reduc = 3;
}

void		ScavTrap::challengeNewcomer(std::string const & target) {
	static int check = 0;
    static const std::string challenge[5] = {
        "unfunny challenge one",
        "unfunny challenge two",
        "unfunny challenge three",
        "unfunny challenge four",
        "unfunny challenge five",
    };
	if (check == 0) {
		srand(time(NULL));
		check += 1;
	}
	if (_ep < 25) {
		std::cout << "I'm too weak!" << std::endl;
		return ;
	}
	std::cout << _classname << " " << _colour << _name << reset << " " << challenge[rand() % 5] << "." << std::endl;
	std::cout << target << " wisely ignores " << _colour << _name << "." << std::endl;
	_ep -= 25;
}
