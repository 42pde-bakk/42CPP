/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:55:17 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/02 18:05:48 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <string>
#include <iostream>
#define reset "\033[0m"

NinjaTrap::NinjaTrap( ) : ClapTrap("NinjaTrap", "Ninjaaaaaaa") {
	std::cout << "NinjaTrap constructor" << std::endl;
	_hp = 60;
	_maxhp = 60;
	_ep = 120;
	_maxep = 120;
	_melee_dmg = 60;
	_ranged_dmg = 5;
	_armor_reduc = 0;
}

NinjaTrap::NinjaTrap(const std::string name ) : ClapTrap("NinjaTrap", name) {
	std::cout << "NinjaTrap constructor" << std::endl;
	_hp = 60;
	_maxhp = 60;
	_ep = 120;
	_maxep = 120;
	_melee_dmg = 60;
	_ranged_dmg = 5;
	_armor_reduc = 0;
}

void		NinjaTrap::ninjaShoebox(ClapTrap &target) {
	std::string	special = "Basic bitch";
	if (target.getClassname() == "ScavTP")
		special = "Oi bruv, you a scav!";
	if (target.getClassname() == "Fr4G-TP")
		special = "That is a real fragger!";
	if (target.getClassname() == "NinjaTrap")
		special = "I cant see ninjas!";
	if (_ep < 25) {
		std::cout << "I'm too weak for this special shoebox attack!" << std::endl;
		return ;
	}
	std::cout << "<" << _classname << " " << _colour << _name << reset << "> " << special << std::endl;
	_ep -= 25;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "NinjaTrap destructor!" << std::endl;
}
