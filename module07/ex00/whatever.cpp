/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 13:18:41 by peer          #+#    #+#                 */
/*   Updated: 2020/08/14 17:12:39 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template< typename T >
void	swap(T& var1, T& var2) {
	T tmpvar = var1;
	var1 = var2;
	var2 = tmpvar;
}

template< typename T>
const T&	min(const T& var1, const T& var2) {
	return (var1 <= var2 ? var1 : var2);
}

template< typename T>
const T&	max(const T& var1, const T& var2) {
	return (var1 >= var2 ? var1 : var2);
}

int	subject_main(void) {
	int	a = 2;
	int	b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return	0;
}

void	peer_test( void) {
	float a = 42.1f;
	float b = -98.2f;

	std::cout << std::endl << "a: " << a << ", b: " << b << std::endl;
	swap(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;
	char c = '&';
	char d = '#';
	std::cout << "the minimum of the chars = " << min(c, d) << ", and the max is: " << max(c, d) << std::endl;
}

int	main(void) {
	subject_main();
	peer_test();
}
