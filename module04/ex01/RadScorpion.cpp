/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:32:11 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 16:19:01 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <string>
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout <<  "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &other) {
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
