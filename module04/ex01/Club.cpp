/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Club.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:59:31 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 12:12:32 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Club.hpp"
#include <string>
#include <iostream>

Club::Club() : AWeapon( "Club", 5, 1 ) {
}

Club::Club( const Club &old_weapon) : AWeapon( ) {
	*this = old_weapon;
}

Club& Club::operator=(const Club &other) {
	if (this != &other) {
		this->name_ = other.name_;
		this->dmg_ = other.dmg_;
		this->apcost_ = other.apcost_;
	}
	return *this;
}

Club::~Club() {

}

void	Club::attack() const {
	std::cout << "\033[1;31m* boom you just got hit by a club *\033[0m" << std::endl;
}
