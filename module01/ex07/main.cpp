/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 11:49:26 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/30 15:31:39 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int replace(std::string input, std::string s1, std::string s2) {
	std::ifstream	inputstream(input.c_str());
	std::string		outputfile = std::string() + input + ".replace";
	std::ofstream	outputstream(outputfile.c_str());
	std::string	readline;

	if (!inputstream || !outputstream) {
		std::cerr << "File cannot be opened!" << std::endl;
		return 0;
	}
	while (std::getline(inputstream, readline)) {
		size_t	found = readline.find(s1);
		while (found != std::string::npos) {
			readline.replace(found, s1.length(), s2);
			found = readline.find(s1, found + s2.length());
		}
		outputstream << readline;
		if (!inputstream.eof())
			outputstream << std::endl;
	}
	return (1);
}

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "wrong set of arguments" << std::endl;
		return (1);
	}
	if (replace(argv[1], argv[2], argv[3]) == 0)
		return (1);
	return (0);
}
