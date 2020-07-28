/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:54:25 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/28 11:44:06 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : _humanName(name), _humanWeapon(weapon) {}

void	HumanA::attack() const {
	std::cout	<< _humanName << " attacks with his "
				<< _humanWeapon.getType() << std::endl;
}
