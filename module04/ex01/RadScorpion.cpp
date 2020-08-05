/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:32:11 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/05 09:02:41 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <string>
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout <<  "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout <<  "* SPROTCH *" << std::endl;
}
