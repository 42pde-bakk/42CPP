/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 20:43:25 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/27 20:57:23 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <cstdlib>
#include <iostream>

ZombieHorde::ZombieHorde(int N) {
	srand(time(NULL));
	_nZombies = new Zombie[N];
	for (int i = 0; i < N; i++)	{
		_nZombies[i].setName(randomName() );
		_nZombies[i].setType(rand() % 10 + 1);
		_nZombies[i].announce();
	}
}
ZombieHorde::~ZombieHorde() { delete[] _nZombies; }

std::string	ZombieHorde::randomName() {
	std::string names[] = {"Peer", "Thijs", "Djevayo", "Albert", "Iris", "Sanne", "Amber", "Jeffrey", "J-money", "Turlough", "Ingmar", "Boris", "Remco", "Wester", "Lindsay", "Merel", "Stan", "Tuan"};
	int x = (rand() % 18) + 1;
	return names[x];
}
