/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BigUglyDragon.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:32:11 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 16:19:01 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BigUglyDragon.hpp"
#include <string>
#include <iostream>

BigUglyDragon::BigUglyDragon() : Enemy(200, "BigUglyDragon") {
	std::cout <<  "* dragonsound *" << std::endl;
}

BigUglyDragon::BigUglyDragon(const BigUglyDragon &other) : Enemy( ) {
	*this = other;
}

BigUglyDragon& BigUglyDragon::operator=( const BigUglyDragon &other) {
	if (this != &other) {
		this->type_ = other.type_;
		this->hp_ = other.hp_;
	}
	return *this;
}

BigUglyDragon::~BigUglyDragon() {
	std::cout <<  "* dying dragon sound *" << std::endl;
}
