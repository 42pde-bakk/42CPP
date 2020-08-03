/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:32:11 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 18:02:22 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <string>
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout <<  "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout <<  "* SPROTCH *" << std::endl;
}

void	RadScorpion::takeDamage(int dmg) {
	if (dmg < 0)
		std::cerr << "cmon bruv, cant attack for negative damage..." << std::endl;
	else  if (hp_ > 0) {
		hp_ -= dmg;
		if (hp_ < 0)
			hp_ = 0;
		std::cout << "Enemy " << type_ << " took " << dmg << " damage, and is now at " << hp_ << "hp." << std::endl;
	}
}
