/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 09:16:00 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 09:33:22 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <string>
#include <iostream>

Victim::Victim() : _name("Renfri") {
	std::cout << "Some random victim called " << _name <<  " just appaeared!" << std::endl;
}

Victim::Victim(const std::string &name) : _name(name) {
	std::cout << "Some random victim called " << _name <<  " just appaeared!" << std::endl;
}

Victim::Victim( const Victim &old_Victim) {
	*this = old_Victim;
}

Victim&	Victim::operator=(const Victim &other) {
	if (this != &other) {
	_name = other._name;
	}
	return *this;
}

const std::string	&Victim::get_name() const {
	return _name;
}

void	Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::ostream&	operator<<(std::ostream& out, const Victim& self) {
	out << "I'm " << self.get_name() << " and I fucking hate otters!!!" << std::endl;
	return out;
}
