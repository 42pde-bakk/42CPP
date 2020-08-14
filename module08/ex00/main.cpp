/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 18:07:13 by peer          #+#    #+#                 */
/*   Updated: 2020/08/14 20:02:25 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>

void	vectors(void) {
	std::vector<int>	PeerVector;
	srand(time(NULL));
	int tofind = rand() % 100;
	std::cout << "int tofind is " << tofind << std::endl;
	for (int i = 0; i < 10; i++)
		PeerVector.push_back(rand() % 100);
	PeerVector.push_back(tofind);
	for (int i = 0; i < 20; i++)
		PeerVector.push_back(rand() % 100);
	try {
		std::vector<int>::iterator found = easyfind(PeerVector, tofind);
		std::cout << "Element found: " << *found << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	lists(void) {
	std::list<int>	PeerList;
	srand(time(NULL));
	int tofind = rand() % 100;
	std::cout << "int tofind is " << tofind << std::endl;
	for (int i = 0; i < 10; i++)
		PeerList.push_back(rand() % 100);
	PeerList.push_back(tofind);
	for (int i = 0; i < 20; i++)
		PeerList.push_back(rand() % 100);
	try {
		std::list<int>::iterator found = easyfind(PeerList, tofind);
		std::cout << "Element found: " << *found << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

int	main(void) {
	vectors();
	lists();
}
