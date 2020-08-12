/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 18:07:13 by peer          #+#    #+#                 */
/*   Updated: 2020/08/12 18:15:08 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>

int	main(void) {
	std::vector<int>	vec;
	srand(time(NULL));
	int tofind = rand() % 100;
	for (int i = 0; i < 10; i++)
		vec.push_back(rand() % 100);
	vec.push_back(tofind);
	for (int i = 0; i < 20; i++)
		vec.push_back(rand() % 100);

	std::vector<int>::iterator found = easyfind(vec, tofind);
	if (found != vec.end())
		std::cout << "found: " << *found << std::endl;
	else
		std::cout << "not found... :(" << std::endl;
}
