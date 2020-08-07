/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:39:40 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 15:11:22 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <string>
#include <iostream>

Character::Character() : _name("Feskir"), _ap(40), _weapon(NULL) {
	
}

Character::Character( std::string const &name)
	: _name(name), _ap(40), _weapon(NULL) {
}

Character::Character( const Character &old_char) {
	*this = old_char;
}

Character::~Character() {
}

Character& Character::operator=(const Character &other) {
	if (this != &other) {
		_name = other._name;
		_ap = other._ap;
		_weapon = other._weapon;
	}
	return *this;
}

std::string Character::getName() const {
	return _name;
}

int			Character::getAP() const {
	return _ap;
}

AWeapon*	Character::getWeapon() const {
	return _weapon;
}

void	Character::recoverAP() {
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void	Character::equip(AWeapon *wp) {
	_weapon = wp;
}

void	Character::attack(Enemy *target) {
	if (_weapon == NULL || target == NULL)
		return ;
	if (_ap < _weapon->getAPCost()) {
		std::cout << _name << " doesnt have enough ap to attack." << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << target->getType()
				<< " with a " << _weapon->getName() << std::endl;
	this->_weapon->attack();
	target->takeDamage(_weapon->getDamage());
	this->_ap -= this->_weapon->getAPCost();
	if (this->_ap < 0)
		this->_ap = 0;
	if (target->getHP() <= 0) {
		delete target;
		target = NULL;
	}
}

std::ostream&	operator<<(std::ostream& out, const Character& self) {
	out << self.getName() << " has " << self.getAP() << " AP and ";
	if (self.getWeapon() == NULL)
		out << "is unarmed" << std::endl;
	else
		out << "wields a " << self.getWeapon()->getName() << std::endl;
	return out;
}
