/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BasicTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:55:17 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/02 17:04:51 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BasicTrap.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
#define reset "\033[0m"

std::string		BasicTrap::getRandomColour() {
	std::string colours[] = {"\033[0;31m", "\033[0;32m", "\033[0;33m", "\033[0;34m", "\033[0;35m", "\033[0;36m"};
	return colours[rand() % 6];
}

BasicTrap::BasicTrap( ) {
	std::cout << "use the other constructor where you pass the name!" << std::endl;
}
BasicTrap::BasicTrap(const std::string type, const std::string name ) : _name(name), _classname(type), _hp(100), _maxhp(100), _ep(100), _maxep(100), _lvl(1), 
	_melee_dmg(30), _ranged_dmg(20), _armor_reduc(5) {
	_colour = this->getRandomColour();
	std::cout	<< "Oy bruv, a new " << _classname << " " << _colour << _name << reset
				<< " has been born"	<< std::endl;
}
BasicTrap::BasicTrap( const BasicTrap &old_obj) {
	std::cout	<< _classname << " " << _colour << _name << reset << "has been cloned." << std::endl;
	*this = old_obj;
}

void		BasicTrap::beRepaired(unsigned int amount) {
	int oldhp = _hp;

	_hp += amount;
	if (_hp > _maxhp)
		_hp = _maxhp;
	std::cout	<< _classname << " " << _colour << _name << reset
				<< " was repaired for " << (_hp - oldhp) << " hp." << std::endl;
}

void		BasicTrap::takeDamage(unsigned int amount) {
	int	oldhp = _hp;
	int	ArmorDmgReduction = amount - _armor_reduc;
	if (ArmorDmgReduction < 0)
		ArmorDmgReduction = 1;

	_hp -= ArmorDmgReduction;
	if (_hp < 0)
		_hp = 0;
	std::cout	<< _classname << " " << _colour << _name << reset
				<< " took " << (oldhp - _hp) << " damage." << std::endl;
	std::cout << _classname << " " << _colour << _name << reset << "\'s health is now " << _hp << "." << std::endl;
}

void		BasicTrap::rangedAttack(std::string const & target) {
	std::cout	<< _classname << " " << _colour << _name << reset
				<< " puts the ranged hurt on " << target << "." << std::endl;
}

void		BasicTrap::meleeAttack(std::string const & target) {
	std::cout	<< _classname << " " << _colour << _name << reset
				<< " puts the melee hurt on " << target << "." << std::endl;
}

void		BasicTrap::ActualRangedAttack(BasicTrap &target) {
	if (this == &target) {
		std::cout << "Self-harm is never an option!" << std::endl;
		return ;
	}
	std::cout	<< _classname << " " << _colour << _name << reset
				<< " puts the ranged hurt on " << _classname << " " << target._colour << target._name << reset << "." << std::endl;
	target.takeDamage(_ranged_dmg);
}

void		BasicTrap::ActualMeleeAttack(BasicTrap &target) {
	if (this == &target) {
		std::cout << "Self-harm is never an option!" << std::endl;
		return ;
	}
	std::cout	<< _classname << " " << _colour << _name << reset 
				<< " puts the melee hurt on " << target._classname << " " << target._colour << target._name << reset << "." << std::endl;
	target.takeDamage(_melee_dmg);
}

BasicTrap&	BasicTrap::operator=(const BasicTrap &other) {
	if (this != &other) {
		_name = other._name;
		_classname = other._classname;
		_colour = other._colour;
		_hp = other._hp;
		_maxhp = other._maxhp;
		_ep = other._ep;
		_maxep = other._maxep;
		_lvl = other._lvl;
		_melee_dmg = other._melee_dmg;
		_ranged_dmg = other._ranged_dmg;
		_armor_reduc = other._armor_reduc;		
	}
	return *this;
}

BasicTrap::~BasicTrap() {
	std::cout << _classname << " " << _colour << _name << reset << " exploded!" << std::endl;
}
