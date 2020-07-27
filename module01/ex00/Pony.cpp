/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 12:43:00 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/27 12:52:42 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( int weight, int length, std::string colour, std::string name )
			: _weight(weight), _length(length), _colour(colour), _name(name) {
	std::cout << "Whoa there pardner, brand new pony !" << std::endl;
}

void		Pony::displayPonyinfo( void) const {
	std::cout	<< _name << " is a pony with " << _colour
				<< " hair (do ponies have hair or is it called something different?). "
				<< "He/she is " << _length << " meters long and weighs "
				<< _weight << "." << std::endl;
}

Pony::~Pony( void ) {
	std::cout << "R.I.P. " << _name << " died to deallocation." << std::endl;
}
