/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:55:17 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/02 17:29:12 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>
#define reset "\033[0m"

FragTrap::FragTrap( ) : BasicTrap("FR4G-TP", "Fragging-Trapper") {
}

FragTrap::FragTrap(const std::string name ) : BasicTrap("FR4G-TP", name) {
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {
	static int check = 0;
	std::string attacks[] = { "bodyslams the shit out of ", "electrocutes ", "shoots ", "does some weird shit to ", "clubs " };
	if (check == 0) {
		srand(time(NULL));
		check += 1;
	}
	if (_ep < 25) {
		std::cout << "I'm too weak!" << std::endl;
		return ;
	}
	std::cout << _classname << " " << _colour << _name << reset << " " << attacks[rand() % 5] << target << "." << std::endl;
	_ep -= 25;
}
