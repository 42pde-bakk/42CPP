/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:59:31 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 12:12:32 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <string>
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon( "Plasma Rifle", 21, 5 ) {
}

void	PlasmaRifle::attack() const {
	std::cout << "\033[1;31m* piouuu piouuu piouuu *\033[0m" << std::endl;
}
