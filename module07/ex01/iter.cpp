/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 14:08:04 by peer          #+#    #+#                 */
/*   Updated: 2020/08/12 14:39:50 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <cstddef>
#include <string>
#include <iostream>

template< typename T >
void	printer(T elem) {
	std::cout << "elem: " << elem << std::endl;
}

template< typename T >
void	iter(T* arr, size_t len, void (*f)(T)) {
	for (size_t i = 0; i < len; i++) {
		f(arr[i]);
	}
}

int	main(void) {
	const int	intarr[] = {0, 4, 3, 6, 8, 237823, -128};
	const std::string stringarr[] = {"wagwan", "wollah", "yaaas", "queen"};
	iter(intarr, 7, printer);
	iter(stringarr, 4, printer);
}
