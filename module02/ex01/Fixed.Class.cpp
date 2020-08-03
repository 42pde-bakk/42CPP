/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.Class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 17:05:04 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 18:19:10 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Class.hpp"
#include <iostream>
#include <string>
#include <cmath>

Fixed::Fixed( ) : _fpv(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int value){
	_fpv = value << _nbFractBits; // basically mults by 256 (1 << 8)
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) {
	_fpv = roundf(value * (1 << _nbFractBits)); // not allowed to bitshift a float
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &old_obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = old_obj;
}

float	Fixed::toFloat( void) const {
	float	out;

	out = (_fpv >> _nbFractBits);
	out += (float)(_fpv & 0xFF) / (1 << _nbFractBits); // only keeping the last 8 bits that are on, we add those as decimals.
	return (out);
}

int		Fixed::toInt( void) const {
	return _fpv >> _nbFractBits;
}

int	Fixed::getRawBits(void) const {
	return _fpv;
}

void	Fixed::setRawBits(int const raw) {
	_fpv = raw;
}

Fixed&	Fixed::operator=(const Fixed &other) {
	std::cout << "Assignation operator called" << std::endl;
	_fpv = other.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& self) {
	out << self.toFloat();
	return out;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
