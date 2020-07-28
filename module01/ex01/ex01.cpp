/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 14:28:16 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/28 16:49:37 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* This is also another option
void memoryLeak()
{
	std::string panther =  std::string("String panther");
	std::cout << panther << std::endl;
}
*/

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
	system( command.c_str());
	return 0;
}
