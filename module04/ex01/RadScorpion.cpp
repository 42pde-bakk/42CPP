/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:32:11 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/10/21 15:18:33 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <string>
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout <<  "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &other) : Enemy( ) {
	*this = other;
}

RadScorpion& RadScorpion::operator=( const RadScorpion &other) {
	if (this != &other) {
		this->type_ = other.type_;
		this->hp_ = other.hp_;
	}
	return *this;
}

RadScorpion::~RadScorpion() {
	std::cout <<  "* SPROTCH *" << std::endl;
}
