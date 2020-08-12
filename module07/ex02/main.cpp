/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 14:46:53 by peer          #+#    #+#                 */
/*   Updated: 2020/08/12 17:09:06 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Array.hpp"
#include <stdlib.h>

int	main(void) {
	Array<int> intarr(8);
	try {
		std::cout << "testing: " << intarr[8] << std::endl;
		std::cout << "testing succesful I reckon" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	srand(time(NULL));
	for (unsigned int i = 0; i < intarr.size(); i++) {
		intarr[i] = rand() % 100;
	}
	std::cout << "{";
	for (unsigned int i = 0; i < intarr.size(); i++) {
		if (i > 0)
			std::cout << ", ";
		std::cout << intarr[i];
	}
	std::cout << "}" << std::endl;
}
