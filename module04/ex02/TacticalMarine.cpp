/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 11:11:01 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/06 09:49:50 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>
#define blue "\033[1;34m"
#define red "\033[1;31m"
#define reset "\033[0m"
#define yellow "\033[1;33m"



TacticalMarine::TacticalMarine() {
	std::cout << yellow << "Tactical Marine ready for battle!" << reset << std::endl;
}

TacticalMarine::TacticalMarine( const TacticalMarine& old_marine) {
	std::cout << yellow << "Tactical Marine ready for battle!" << reset << std::endl;
	*this = old_marine;
}

TacticalMarine&	TacticalMarine::operator=(const TacticalMarine& other) {
	(void)other;
	return *this;
}

TacticalMarine*	TacticalMarine::clone() const {
	return new TacticalMarine(*this);
}

void			TacticalMarine::battleCry() const {
	std::cout << blue << "For the holy PLOT!" << reset << std::endl;
}

void			TacticalMarine::meleeAttack() const {
	std::cout << blue <<   "* attacks with a chainsword *" << reset << std::endl;
}

void			TacticalMarine::rangedAttack() const {
	std::cout << blue <<  "* attacks with a bolter *" << reset << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << red << "Aaargh..." << reset << std::endl;
}
