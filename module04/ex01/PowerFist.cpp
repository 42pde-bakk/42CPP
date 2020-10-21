/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:59:31 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 12:12:32 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <string>
#include <iostream>

PowerFist::PowerFist() : AWeapon( "Power Fist", 50, 8 ) {
}

PowerFist::PowerFist( const PowerFist &old_weapon) : AWeapon( ) {
	*this = old_weapon;
}

PowerFist& PowerFist::operator=(const PowerFist &other) {
	if (this != &other) {
		this->name_ = other.name_;
		this->dmg_ = other.dmg_;
		this->apcost_ = other.apcost_;
	}
	return *this;
}

PowerFist::~PowerFist() {

}

void	PowerFist::attack() const {
	std::cout << "\033[1;31m* pschhh... SBAM! *\033[0m" << std::endl;
}
