/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 19:16:21 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/14 23:48:06 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <stdlib.h>

int	subject_test() {
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}

int	peer_test() {
	Span sp = Span(100001);
	std::vector<int> peervec;
	srand(time(NULL));
	for (int i = 0; i < 10000; i++)
		peervec.push_back(rand());

	try {
		sp.addNumber(peervec.begin(), peervec.end());
	}
	catch (std::exception& e) {
		std::cout << "failed: " << e.what() << std::endl;
	}
	try {
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	// std::cout << sp.longestSpan() << std::endl;
	return 0;
}

int main() {
	// subject_test();
	peer_test();
}
