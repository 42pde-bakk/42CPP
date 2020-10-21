/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Stooge.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 09:16:00 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 09:33:22 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Stooge.hpp"
#include <string>
#include <iostream>

Stooge::Stooge() : Victim("Stoogeeer") {
	std::cout << "Zog zog." << std::endl;
}

Stooge::Stooge(const std::string &name) : Victim(name) {
	std::cout << "stooge constructor" << std::endl;
}

Stooge::Stooge( const Stooge &old_Stooge) : Victim( ) {
	*this = old_Stooge;
}

Stooge&	Stooge::operator=(const Stooge &other) {
	if (this != &other) {
		_name = other._name;
	}
	return *this;
}

void	Stooge::getPolymorphed() const {
	std::cout << _name << " has been turned into whatever a stooge gets turned into" << std::endl;
}

Stooge::~Stooge() {
	std::cout << "stooge out" << std::endl;
}
