/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 09:31:48 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/12 21:06:46 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Stooge.hpp"
#include <iostream>
#include <string>

int	subjecttest() {
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}

int	mytest() {
	Sorcerer	Stregobor("Stregobor", "Master Irion");
	Victim		Renfri("Renfri");
	Peon		Peoneer("NotRenfri");
	Peon		Peoneer2(Peoneer);
	Stooge		Stogey("noname");
	
	std::cout << Stregobor << Renfri << Peoneer << Stogey;
	
	Stregobor.polymorph(Renfri);
	Stregobor.polymorph(Peoneer);
	Stregobor.polymorph(Stogey);
	return 0;
}

int	main( void) {
	std::cout << "\033[1;31mThese tests are supplied by the subject pdf:\033[0;m" << std::endl;
	subjecttest();
	std::cout << std::endl << "\033[1;33mNow its time for my own tests:\033[0;m" << std::endl;
	mytest();
	// system("leaks sorcerer.out");
}
