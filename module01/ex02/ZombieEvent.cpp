/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 19:11:14 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/30 15:40:44 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

ZombieEvent::ZombieEvent() {
	_eventType = 0;
}

void	ZombieEvent::setZombieType(int value) {
	_eventType = value;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	Zombie	*zombs = new Zombie;
	if (!zombs)
		return (NULL);
	zombs->setType(_eventType);
	zombs->setName(name);
	return (zombs);
}

std::string	randomName(int x) {
	std::string names[] = {"Peer", "Thijs", "Djevayo", "Albert", "Iris", "Sanne", "Amber", "Jeffrey", "J-money", "Turlough", "Ingmar", "Boris", "Remco", "Wester", "Lindsay", "Merel", "Stan", "Tuan", "Victor", "Griffin"};
	return names[x];
}

Zombie	*ZombieEvent::randomChump(void) {
	int x = (rand() % 20);
	std::string name = randomName(x);
	Zombie *zombs = newZombie(name);
	zombs->announce();
	return (zombs);
}
ZombieEvent::~ZombieEvent() {
	std::cout << "ZombieEvent closed down" << std::endl;
}
