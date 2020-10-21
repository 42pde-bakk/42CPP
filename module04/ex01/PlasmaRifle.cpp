/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:59:31 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 12:12:32 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <string>
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon( "Plasma Rifle", 21, 5 ) {
}

PlasmaRifle::PlasmaRifle( const PlasmaRifle &old_weapon) : AWeapon( ) {
	*this = old_weapon;
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle &other) {
	if (this != &other) {
		name_ = other.name_;
		dmg_ = other.dmg_;
		apcost_ = other.apcost_;
	}
	return *this;
}

PlasmaRifle::~PlasmaRifle() {

}

void	PlasmaRifle::attack() const {
	std::cout << "\033[1;31m* piouuu piouuu piouuu *\033[0m" << std::endl;
}
