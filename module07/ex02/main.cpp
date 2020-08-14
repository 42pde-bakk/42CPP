/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 14:46:53 by peer          #+#    #+#                 */
/*   Updated: 2020/08/14 17:22:53 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Array.hpp"
#include <stdlib.h>

void	ints(void) {
	Array<int> intarr(8);
	try {
		std::cout << "testing: " << intarr[8] << std::endl;
		std::cout << "testing succesful I reckon" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	srand(time(NULL));
	for (unsigned int i = 0; i < intarr.size(); i++) {
		intarr[i] = rand() % 100;
	}
	std::cout << "{";
	for (unsigned int i = 0; i < intarr.size(); i++) {
		if (i > 0)
			std::cout << ", ";
		std::cout << intarr[i];
	}
	std::cout << "}" << std::endl;
}

std::string	allstar(int frame)
{
    static const std::string	lyrics[] = {
    "SOME", "BODY", "ONCE", "TOLD", "ME", "THE", "WORLD", "IS", "GONNA", "ROLL", "ME",
"I", "AIN'T", "THE", "SHARPEST", "TOOL", "IN", "THE", "SHED",
"SHE", "WAS", "LOOKING", "KIND", "OF", "DUMB", "WITH", "HER", "FINGER", "AND", "HER", "THUMB",
"IN", "THE", "SHAPE", "OF", "AN", "L", "ON", "HER", "FOREHEAD",
"WELL", "THE", "YEARS", "START", "COMING", "AND", "THEY", "DON'T", "STOP", "COMING",
"FED", "TO", "THE", "RULES", "AND", "I", "HIT", "THE", "GROUND", "RUNNING",
"DIDN'T", "MAKE", "SENSE", "NOT", "TO", "LIVE", "FOR", "FUN",
"YOUR", "BRAIN", "GETS", "SMART", "BUT", "YOUR", "HEAD", "GETS", "DUMB",
"SO", "MUCH", "TO", "DO", "SO", "MUCH", "TO", "SEE",
"SO", "WHAT'S", "WRONG", "WITH", "TAKING", "THE", "BACK", "STREETS",
"YOU'LL", "NEVER", "KNOW", "IF", "YOU", "DON'T", "GO",
"YOU'LL", "NEVER", "SHINE", "IF", "YOU", "DON'T", "GLOW",
"HEY", "NOW", "YOU'RE", "AN", "ALL", "STAR", "GET", "YOUR", "GAME", "ON", "GO", "PLAY",
"HEY", "NOW", "YOU'RE", "A", "ROCK", "STAR", "GET", "THE", "SHOW", "ON", "GET", "PAID",
"AND", "ALL", "THAT", "GLITTERS", "IS", "GOLD",
"ONLY", "SHOOTING", "STARS", "BREAK", "THE", "MOLD",
"IT'S", "A", "COOL", "PLACE", "AND", "THEY", "SAY", "IT", "GETS", "COLDER",
"YOU'RE", "BUNDLED", "UP", "NOW", "WAIT", "TILL", "YOU", "GET", "OLDER",
"BUT", "THE", "METEOR", "MEN", "BEG", "TO", "DIFFER",
"JUDG-", "ING", "BY", "THE", "HOLE", "IN", "THE", "SA", "TEL", "LITE", "PIC", "TURE",
"THE", "ICE", "WE", "SKATE", "IS", "GETTING", "PRETTY", "THIN",
"THE", "WATER'S", "GETTING", "WARM", "SO", "YOU", "MIGHT", "AS", "WELL", "SWIM",
"MY", "WORLD'S", "ON", "FIRE", "HOW", "ABOUT", "YOURS"
};
    return (lyrics[frame]);
}

void	strings(void) {
	Array<std::string> stringarr(6);
	try {
		std::cout << "testing: " << stringarr[6] << std::endl;
		std::cout << "testing succesful I reckon" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	srand(time(NULL));
	for (unsigned int i = 0; i < stringarr.size(); i++) {
		stringarr[i] = allstar(rand() % 206);
	}
	std::cout << "{";
	for (unsigned int i = 0; i < stringarr.size(); i++) {
		if (i > 0)
			std::cout << ", ";
		std::cout << stringarr[i];
	}
	std::cout << "}" << std::endl;
}

void	floats(void) {
	Array<float> floatarr(9);
	try {
		std::cout << "testing: " << floatarr[9] << std::endl;
		std::cout << "testing succesful I reckon" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	srand(time(NULL));
	for (unsigned int i = 0; i < floatarr.size(); i++) {
		floatarr[i] = static_cast <float> (rand() % 1000) / static_cast <float> (rand() % 10);
	}
	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "{";
	for (unsigned int i = 0; i < floatarr.size(); i++) {
		if (i > 0)
			std::cout << ", ";
		std::cout << floatarr[i];
	}
	std::cout << "}" << std::endl;
}

int	main(void) {
	// ints();
	// strings();
	floats();
	return 0;
}
