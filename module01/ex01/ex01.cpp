/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 14:28:16 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/27 14:47:00 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int	main(int argc, char **argv) {
	(void)argc;
	std::string command = ("leaks " + std::string(argv[0])).erase(6, 2);
	memoryLeak();
	std::cout << command << std::endl;
	system( command);
	return 0;
}
