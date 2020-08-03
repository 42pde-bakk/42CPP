/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 09:16:00 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 09:33:22 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include <string>
#include <iostream>

Peon::Peon() : Victim("peoneer") {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const std::string &name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

void	Peon::getPolymorphed() const {
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}
