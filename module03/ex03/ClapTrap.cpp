/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:55:17 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/02 18:19:06 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#define reset "\033[0m"

std::string		ClapTrap::getRandomColour() {
	static int taken[6];
	std::string colours[] = {"\033[0;31m", "\033[0;32m", "\033[0;33m", "\033[0;34m", "\033[0;35m", "\033[0;36m"};
	int x = rand() % 6;
	int	*foo = std::find(std::begin(taken), std::end(taken), x);
	if (foo != std::end(taken))
		x = rand() % 6;
	// std::cout << "x = " << x << std::endl;
	return colours[x];
}

ClapTrap::ClapTrap( ) {
	std::cout << "use the other constructor where you pass the name!" << std::endl;
}
ClapTrap::ClapTrap(const std::string type, const std::string name ) : _name(name), _classname(type), _hp(100), _maxhp(100), _ep(100), _maxep(100), _lvl(1), 
	_melee_dmg(30), _ranged_dmg(20), _armor_reduc(5) {
	_colour = this->getRandomColour();
	std::cout	<< "Oy bruv, a new " << _classname << " " << _colour << _name << reset
				<< " has been born"	<< std::endl;
}
ClapTrap::ClapTrap( const ClapTrap &old_obj) {
	std::cout	<< _classname << " " << _colour << _name << reset << "has been cloned." << std::endl;
	*this = old_obj;
}

std::string	ClapTrap::getClassname() {
	return _classname;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	int oldhp = _hp;

	_hp += amount;
	if (_hp > _maxhp)
		_hp = _maxhp;
	std::cout	<< _classname << " " << _colour << _name << reset
				<< " was repaired for " << (_hp - oldhp) << " hp." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {
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

void		ClapTrap::rangedAttack(std::string const & target) {
	std::cout	<< _classname << " " << _colour << _name << reset
				<< " puts the ranged hurt on " << target << "." << std::endl;
}

void		ClapTrap::meleeAttack(std::string const & target) {
	std::cout	<< _classname << " " << _colour << _name << reset
				<< " puts the melee hurt on " << target << "." << std::endl;
}

void		ClapTrap::ActualRangedAttack(ClapTrap &target) {
	if (this == &target) {
		std::cout << "Self-harm is never an option!" << std::endl;
		return ;
	}
	std::cout	<< _classname << " " << _colour << _name << reset
				<< " puts the ranged hurt on " << _classname << " " << target._colour << target._name << reset << "." << std::endl;
	target.takeDamage(_ranged_dmg);
}

void		ClapTrap::ActualMeleeAttack(ClapTrap &target) {
	if (this == &target) {
		std::cout << "Self-harm is never an option!" << std::endl;
		return ;
	}
	std::cout	<< _classname << " " << _colour << _name << reset 
				<< " puts the melee hurt on " << target._classname << " " << target._colour << target._name << reset << "." << std::endl;
	target.takeDamage(_melee_dmg);
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &other) {
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

ClapTrap::~ClapTrap() {
	std::cout << _classname << " " << _colour << _name << reset << " exploded!" << std::endl;
}
