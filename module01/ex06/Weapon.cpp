/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:50:44 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/28 11:00:42 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(std::string weapon) : _type(weapon) { }

const std::string&	Weapon::getType() const {
	return this->_type;
}

void	Weapon::setType(std::string type) {
	_type = type;
}
