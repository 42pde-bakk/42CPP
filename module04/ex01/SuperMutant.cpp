/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:32:11 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 18:01:32 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <string>
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout <<  "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int dmg) {
	dmg -= 3;
	if (dmg < 0)
		std::cerr << "cmon bruv, cant attack for negative damage..." << std::endl;
	else {
		hp_ -= dmg;
		if (hp_ < 0)
			hp_ = 0;
		std::cout << "Enemy " << type_ << " took " << dmg << " damage, and is now at " << hp_ << "hp." << std::endl;
	}
}
