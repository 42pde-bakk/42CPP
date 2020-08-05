/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 11:11:01 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/05 12:04:35 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>
#define blue "\033[1;34m"
#define red "\033[1;31m"
#define reset "\033[0m"
#define yellow "\033[1;33m"

AssaultTerminator::AssaultTerminator() {
	std::cout << yellow << "* teleports from space *" << reset << std::endl;
}

AssaultTerminator::AssaultTerminator( const AssaultTerminator& old_marine) {
	*this = old_marine;
}

AssaultTerminator&	AssaultTerminator::operator=(const AssaultTerminator& other) {
	(void)other; //stupid
	return *this;
}

AssaultTerminator*	AssaultTerminator::clone() const {
	return new AssaultTerminator(*this);
}

void			AssaultTerminator::battleCry() const {
	std::cout << blue << "This code is unclean. PURIFY IT!" << reset << std::endl;
}

void			AssaultTerminator::meleeAttack() const {
	std::cout << blue << "* attacks with chainfists *" << reset << std::endl;
}

void			AssaultTerminator::rangedAttack() const {
	std::cout << blue << "* does nothing *" << reset << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << red << "I'll be back..." << reset << std::endl;
}
