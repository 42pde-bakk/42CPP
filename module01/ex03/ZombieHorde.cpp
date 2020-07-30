/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 20:43:25 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/30 15:39:56 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <cstdlib>
#include <iostream>

ZombieHorde::ZombieHorde(int N) {
	_nZombies = new Zombie[N];
	for (int i = 0; i < N; i++)	{
		_nZombies[i].setName(randomName() );
		_nZombies[i].setType(rand() % 10 + 1);
		_nZombies[i].announce();
	}
}
ZombieHorde::~ZombieHorde() { delete[] _nZombies; }

std::string	ZombieHorde::randomName() {
	std::string names[] = {"Peer", "Thijs", "Djevayo", "Albert", "Iris", "Sanne", "Amber", "Jeffrey", "J-money", "Turlough", "Ingmar", "Boris", "Remco", "Wester", "Lindsay", "Merel", "Stan", "Tuan", "Victor", "Griffin"};
	int x = (rand() % 20);
	return names[x];
}
