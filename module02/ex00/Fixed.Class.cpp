/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.Class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 17:05:04 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/29 18:23:04 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Class.hpp"
#include <iostream>
#include <string>

Fixed::Fixed( ) : _fpv(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &old_obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = old_obj;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _fpv;
}

void	Fixed::setRawBits(int const raw) {
	_fpv = raw;
}

Fixed&	Fixed::operator=(const Fixed &other) {
	std::cout << "Assignment operator called" << std::endl;
	_fpv = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
