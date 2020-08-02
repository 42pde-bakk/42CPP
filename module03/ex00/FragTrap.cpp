/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:55:17 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/02 14:21:48 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap( ) : _name("Fragger-Trapper"), _hp(100), _maxhp(100), _ep(100), _maxep(100), _lvl(1), 
	_melee_dmg(30), _ranged_dmg(20), _armor_reduc(5) {
	std::cout	<< "Not sure how physics work with this, but a new FR4G-TP " << _name 
				<< " has been born"	<< std::endl;
}
FragTrap::FragTrap(const std::string name ) : _name(name), _hp(100), _maxhp(100), _ep(100), _maxep(100), _lvl(1), 
	_melee_dmg(30), _ranged_dmg(20), _armor_reduc(5) {
	std::cout	<< "Not sure how physics work with this, but a new FR4G-TP " << _name 
				<< " has been born"	<< std::endl;
}
FragTrap::FragTrap( const FragTrap &old_obj) {
	std::cout	<< "FR4G-TP " << _name << "has been cloned." << std::endl;
	*this = old_obj;
}

void		FragTrap::beRepaired(unsigned int amount) {
	int oldhp = _hp;

	_hp += amount;
	if (_hp > _maxhp)
		_hp = _maxhp;
	std::cout	<< "FR4G-TP " << _name
				<< " was repaired for " << (_hp - oldhp) << " hp." << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount) {
	int	oldhp = _hp;
	int	ArmorDmgReduction = amount - _armor_reduc;

	_hp -= ArmorDmgReduction;
	if (_hp < 0)
		_hp = 0;
	std::cout	<< "FR4G-TP " << _name
				<< " took " << (oldhp - _hp) << " damage." << std::endl;
}

void		FragTrap::rangedAttack(std::string const & target) {
	std::cout	<< "FR4G-TP " << _name
				<< " puts the ranged hurt on " << target << "." << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target) {
	std::cout	<< "FR4G-TP " << _name
				<< " puts the melee hurt on " << target << "." << std::endl;
}

void		FragTrap::ActualRangedAttack(FragTrap &target) {
	if (this == &target) {
		std::cout << "Self-harm is never an option!" << std::endl;
		return ;
	}
	std::cout	<< "FR4G-TP " << _name
				<< " puts the ranged hurt on " << target._name << "." << std::endl;
	target.takeDamage(_ranged_dmg);
}

void		FragTrap::ActualMeleeAttack(FragTrap &target) {
	if (this == &target) {
		std::cout << "Self-harm is never an option!" << std::endl;
		return ;
	}
	std::cout	<< "FR4G-TP " << _name
				<< " puts the melee hurt on " << target._name << "." << std::endl;
	target.takeDamage(_melee_dmg);
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {
	static int check = 0;
	std::string attacks[] = { "bodyslams the shit out of ", "electrocutes ", "shoots ", "does some weird shit to ", "clubs " };
	if (check == 0) {
		srand(time(NULL));
		check += 1;
	}
	if (_ep < 25) {
		std::cout << "I'm too weak!" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP " << _name << " " << attacks[rand() % 5] << target << "." << std::endl;
	_ep -= 25;
}


FragTrap&	FragTrap::operator=(const FragTrap &other) {
	if (this != &other) {
		_name = other._name;
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

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP " << _name << " exploded!" << std::endl;
}
