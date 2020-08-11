/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/11 23:48:22 by peer          #+#    #+#                 */
/*   Updated: 2020/08/12 00:15:05 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

Base::~Base() {}

Base	*generate(void) {
	static int check = 0;
	if (check == 0) {
		check += 1;
		srand(time(NULL));
	}
	int type = rand() % 3;
	if (type == 0) {
		std::cout << "generated A" << std::endl;
		return new A;
	}
	else if (type == 1) {
		std::cout << "generated B" << std::endl;
		return new B;
	}
	else {
		std::cout << "generated C" << std::endl;
		return new C;
	}
}

void	identify_from_pointer(Base *p) {
	A	*Aclass;
	B	*Bclass;
	C	*Cclass;
	Aclass = dynamic_cast<A*>(p);
	Bclass = dynamic_cast<B*>(p);
	Cclass = dynamic_cast<C*>(p);
	if (Aclass)
		std::cout << "A" << std::endl;
	else if (Bclass)
		std::cout << "B" << std::endl;
	if (Cclass)
		std::cout << "C" << std::endl;
}

void	identify_from_reference(Base &p) {
try {
	A &Aclass = dynamic_cast<A&>(p);
	std::cout << "A" << std::endl;
	(void)Aclass;
}
catch (std::exception& e) { }
try {
	B &Bclass = dynamic_cast<B&>(p);
	std::cout << "B" << std::endl;
	(void)Bclass;
}
catch (std::exception& e) { }
try {
	C &Cclass = dynamic_cast<C&>(p);
	std::cout << "C" << std::endl;
	(void)Cclass;
}
catch (std::exception& e) { }
}

int	main(void) {
	
	identify_from_pointer(generate());
	Base* bas = generate();
	identify_from_reference(*bas);

}
