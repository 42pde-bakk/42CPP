/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 16:57:52 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/29 18:32:23 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.Class.hpp"
#include <iostream>
#include <string>

int	main(void) {
	Fixed		a;
	Fixed const	b( 10 );
	Fixed const	c( 42.42f );
	Fixed const	d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << "as integer" << std::endl;
	std::cout << "b is " << b.toInt() << "as integer" << std::endl;
	std::cout << "c is " << c.toInt() << "as integer" << std::endl;
	std::cout << "d is " << d.toInt() << "as integer" << std::endl;

	return 0;
}
