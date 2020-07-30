/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 19:49:39 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/30 15:38:06 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int		main() {
	srand(time(NULL));	
	ZombieHorde	z(5);
	
	std::cout << std::endl << "Another one!" << std::endl << std::endl;
	ZombieHorde biggerz(10);

	system("leaks zombiehorde.out");
	return (0);
}
