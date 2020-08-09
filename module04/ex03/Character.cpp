/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 11:28:29 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 17:04:31 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include <string>
#define blue "\033[1;34m"
#define red "\033[1;31m"
#define reset "\033[0m"
#define yellow "\033[1;33m"
#include <strings.h> //only for bzero on g++, clang++ doesnt need

Character::Character() : _spellcount(0), _name("feskir") {
	bzero(this->_inventory, 5 * sizeof(AMateria*));
}

Character::Character(const std::string& name) : _spellcount(0), _name(name) {
	bzero(this->_inventory, 5 * sizeof(AMateria*));
}

Character::Character(const Character& other) {
	this->_spellcount = other._spellcount;
	this->_name = other._name;
	bzero(this->_inventory, 5 * sizeof(AMateria*));
	
	for (int i = 0; i < 4; i++) {
		if (other._inventory[i] != NULL)
			this->_inventory[i] = other._inventory[i]->clone();
	}
}

Character&	Character::operator=(const Character& other) {
	if (this != &other) {
		for (int i = 0; this->_inventory[i]; i++) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		this->_spellcount = other._spellcount;
		this->_name = other._name;
		for (int i = 0; i < 4; i++) {
			this->_inventory[i] = other._inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; this->_inventory[i]; i++) {
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
}

std::string	const&	Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m->clone();
			this->_spellcount += 1;
			break ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4 || this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx]->use(target);
}
