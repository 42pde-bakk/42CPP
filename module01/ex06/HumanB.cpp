/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:54:25 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/28 11:43:01 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : _humanName(name), _humanWeapon(0) {
}

void	HumanB::setWeapon(Weapon& weapon) {
	_humanWeapon = &weapon;
}

void	HumanB::attack() const {
	std::cout	<< _humanName << " attacks with his "
				<< _humanWeapon->getType() << std::endl;
}
