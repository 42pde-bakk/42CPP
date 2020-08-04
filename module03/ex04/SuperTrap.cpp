/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:55:17 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/02 18:05:48 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <string>
#include <iostream>

SuperTrap::SuperTrap( ) : ClapTrap("SuperTrap", "Ninjaaaaaaa"), FragTrap("Ninjaaaaaaa"), NinjaTrap("Ninjaaaaaaa") {
	std::cout << "SuperTrap constructor" << std::endl;
	_hp = 60;
	_maxhp = 60;
	_ep = 120;
	_maxep = 120;
	_melee_dmg = 60;
	_ranged_dmg = 20;
	_armor_reduc = 5;
}

SuperTrap::SuperTrap(const std::string name ) : ClapTrap("SuperTrap", name), FragTrap("Ninjaaaaaaa"), NinjaTrap("Ninjaaaaaaa") {
	std::cout << "SuperTrap constructor" << std::endl;
	_hp = 60;
	_maxhp = 60;
	_ep = 120;
	_maxep = 120;
	_melee_dmg = 60;
	_ranged_dmg = 20;
	_armor_reduc = 5;
}
