/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 19:49:39 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/30 15:36:21 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void	spawnZombieOnTheHeap(ZombieEvent event) {
	Zombie		*heapzombie;
	
	event.setZombieType( (rand() % 10) + 1 );
	heapzombie = event.randomChump();
	delete heapzombie;
}

int		main() {
	ZombieEvent	event;
	Zombie		stackZombie;
	
	srand(time(NULL));
	spawnZombieOnTheHeap(event);

	stackZombie.setName("Stack smasher");
	stackZombie.setType(0);
	stackZombie.announce();

	spawnZombieOnTheHeap(event);
	spawnZombieOnTheHeap(event);
	spawnZombieOnTheHeap(event);
	spawnZombieOnTheHeap(event);
	spawnZombieOnTheHeap(event);
	spawnZombieOnTheHeap(event);
	spawnZombieOnTheHeap(event);

	system("leaks zombie.out");
}
