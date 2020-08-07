/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 10:06:06 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/06 10:24:20 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <string>
#include <iostream>
#define red "\033[1;31m"
#define green "\033[1;32m"
#define yellow "\033[1;33m"
#define blue "\033[1;34m"
#define reset "\033[0m"

Cure::Cure() : AMateria() {
	this->_type = "cure";
	this->_xp = 0;
}

Cure::Cure(const Cure& other) : AMateria() {
	*this = other;
}

Cure& Cure::operator=(const Cure& other) {
	if (this != &other) {
		this->_xp = other._xp;
		this->_type = other._type;
	}
	return *this;
}

Cure::~Cure() {
}

// Coplien form done

Cure*			Cure::clone() const {
	return new Cure(*this);
}

void					Cure::use(ICharacter& target) {
	std::cout << green <<  "* heals " << target.getName() << "’s wounds *" << reset << std::endl;
	this->_xp += 10;
}
