/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 10:06:06 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/06 16:38:07 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <string>
#include <iostream>
#define blue "\033[1;34m"
#define red "\033[1;31m"
#define reset "\033[0m"
#define yellow "\033[1;33m"

AMateria::AMateria() : _type("AMateria"), _xp(0) {
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {
}

AMateria::AMateria(const AMateria& other){
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& other) {
	if (this != &other) {
		this->_xp = other._xp;
		this->_type = other._type;
	}
	return *this;
}

AMateria::~AMateria() {
}

// Coplien form done

std::string const&	AMateria::getType() const {
	return this->_type;
}

unsigned int		AMateria::getXP() const {
	return this->_xp;
}

void					AMateria::use(ICharacter& target) {
	(void)target;
	this->_xp += 10;
}
