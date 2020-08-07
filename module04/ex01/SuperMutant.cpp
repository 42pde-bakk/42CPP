/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:32:11 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 16:17:52 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <string>
#include <iostream>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &other) {
	*this = other;
}

SuperMutant& SuperMutant::operator=( const SuperMutant &other) {
	if (this != &other) {
		this->type_ = other.type_;
		this->hp_ = other.hp_;
	}
	return *this;
}

SuperMutant::~SuperMutant() {
	std::cout <<  "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int dmg) {
	if (dmg < 0)
		std::cerr << "cmon bruv, cant attack for negative damage..." << std::endl;
	else {
		if (dmg >= 3)
			dmg -= 3;
		this->hp_ -= dmg;
		if (this->hp_ < 0)
			this->hp_ = 0;
		std::cout << "Enemy " << this->type_ << " took " << dmg << " damage, and is now at " << this->hp_ << "hp." << std::endl;
	}
}
