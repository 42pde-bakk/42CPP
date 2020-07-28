/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 11:49:26 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/28 12:50:30 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int replace(std::string input, std::string s1, std::string s2) {
	std::ifstream	inputstream(input.c_str());
	std::string		outputfile = std::string() + input + ".replace";
	std::ofstream	outputstream(outputfile.c_str());

	if (!inputstream || !outputstream) {
		std::cerr << "File cannot be opened!" << std::endl;
		return 0;
	}
	std::string	readline;
	while (getline(inputstream, readline)) {
		std::cout << "new getline() call, readline.length = " << readline.length() << std::endl;
		size_t pos = 0;
		pos = readline.find(s1, pos);
		std::cout << "first pos = " << pos << std::endl;
		pos = readline.find(s1, pos);
		std::cout << "second pos = " << pos << std::endl;
		std::cout << "npos: " << std::string::npos << std::endl;
		while (pos != std::string::npos) {
			readline.replace(pos, s1.length(), s2);
			pos = readline.find(s1, pos++);
		}
		outputstream << readline << std::endl;
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
