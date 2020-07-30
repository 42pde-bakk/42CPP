/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:55:17 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/30 18:08:15 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap( ) : _hp(100), _maxhp(100), _ep(100), _maxep(100), _lvl(1), 
	_melee_dmg(30), _ranged_dmg(20), _armor_reduc(5) { }

FragTrap::FragTrap( const FragTrap &old_obj) {
	*this = old_obj;
}

FragTrap&	FragTrap::operator=(const FragTrap &other) {
	if (this != &other) {
		_hp = other._hp;
		_maxhp = other._maxhp;
		_ep = other._ep;
		_maxep = other._maxep;
		_lvl = other._lvl;
		
	}
	return *this;
}

FragTrap::~FragTrap() {
}