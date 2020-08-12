/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 09:16:00 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/12 21:07:32 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <string>
#include <iostream>

Sorcerer::Sorcerer(){ }

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : _name(name), _title(title) {
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( const Sorcerer &old_sorcerer) {
	*this = old_sorcerer;
}

Sorcerer&	Sorcerer::operator=(const Sorcerer &other) {
	if (this != &other) {
		_title = other._title;
		_name = other._name;
	}
	return *this;
}

const std::string	&Sorcerer::get_name() const {
	return _name;
}

const std::string	&Sorcerer::get_title() const {
	return _title;
}

void				Sorcerer::polymorph(Victim const &target) const {
	target.getPolymorphed();
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << " is dead. Consequences will never be the same!" << std::endl;
}

std::ostream&	operator<<(std::ostream& out, const Sorcerer& self) {
	out << "I am " << self.get_name() << ", " << self.get_title() << ", and I fucking hate ponies!!!" << std::endl;
	return out;
}
