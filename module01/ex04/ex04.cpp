/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 09:54:15 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/28 09:58:25 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	displayByPtr(std::string *input) {
	std::cout << *input << std::endl;
}

void	displayByRef(std::string& input) {
	std::cout << input << std::endl;
}

int		main() {
	std::string	str = "HI THIS IS BRAIN";

	displayByPtr(&str);
	displayByRef(str);
}
