/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 16:50:42 by peer          #+#    #+#                 */
/*   Updated: 2020/07/27 20:19:23 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string.h>


Zombie::Zombie() {}

void	Zombie::setType(int value) {
	_type = value;
}

void	Zombie::setName(std::string str) {
	_name = str;
}

void	Zombie::announce() const{
	std::string types[] = {"Walker", "Crawler", "Romero", "Ghoul", "Infected", "Screamer", "Puker", "Stalker", "Spitter", "Burster"};
	std::cout	<< "<" <<_name
				<< " ("	<< types[ _type % 10] << ")>"
				<< "Brainzzzzzzzzzz..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie \"" << _name << "\" died." << std::endl;
}
