/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:59:31 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 16:30:24 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <string>
#include <iostream>

AWeapon::AWeapon() {
	
}

AWeapon::AWeapon(std::string const & name, int damage, int apcost)
					: name_(name), dmg_(damage), apcost_(apcost) {
}

AWeapon::AWeapon( const AWeapon &old_weapon) {
	*this = old_weapon;
}

AWeapon::~AWeapon() {
}

AWeapon& AWeapon::operator=(const AWeapon &other) {
	if (this != &other) {
		name_ = other.name_;
		dmg_ = other.dmg_;
		apcost_ = other.apcost_;
	}
	return *this;
}

std::string	AWeapon::getName() const {
	return name_;
}

int	AWeapon::getDamage() const {
	return dmg_;
}

int	AWeapon::getAPCost() const {
	return apcost_;
}
