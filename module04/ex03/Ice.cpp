/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 10:06:06 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/06 10:24:20 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <string>
#include <iostream>
#define blue "\033[1;34m"
#define red "\033[1;31m"
#define reset "\033[0m"
#define yellow "\033[1;33m"

Ice::Ice() : AMateria() {
	this->_type = "ice";
	this->_xp = 0;
}

Ice::Ice(const Ice& other) : AMateria() {
	*this = other;
}

Ice& Ice::operator=(const Ice& other) {
	if (this != &other) {
		this->_xp = other._xp;
		this->_type = other._type;
	}
	return *this;
}

Ice::~Ice() {
}

// Coplien form done

Ice*			Ice::clone() const {
	return new Ice(*this);
}

void					Ice::use(ICharacter& target) {
	std::cout << blue << "* shoots an ice bolt at " << target.getName() << " *" << reset << std::endl;
	this->_xp += 10;
}
