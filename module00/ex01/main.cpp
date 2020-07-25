/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 21:11:05 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/25 23:18:50 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.Class.hpp"
#include <iostream>

Contact	set_contact_info(void)
{
	Contact		new_contact;
	std::string	input;
	
	std::cout << "Enter the contact's first name, please." << std::endl;
	std::cin >> input;
	new_contact.set_firstname(input);

	std::cout << "Enter the contact's last name, please." << std::endl;
	std::cin >> input;
	new_contact.set_lastname(input);

	std::cout << "Enter the contact's nickname, please." << std::endl;
	std::cin >> input;
	new_contact.set_nickname(input);

	std::cout << "Enter the contact's login, please." << std::endl;
	std::cin >> input;
	new_contact.set_login(input);

	std::cout << "Enter the contact's postal address, please." << std::endl;
	std::cin >> input;
	new_contact.set_postal_address(input);

	std::cout << "Enter the contact's email address, please." << std::endl;
	std::cin >> input;
	new_contact.set_email_address(input);
	
	std::cout << "Enter the contact's phone number, please." << std::endl;
	std::cin >> input;
	new_contact.set_phone_number(input);

	std::cout << "Enter the contact's birthday, please." << std::endl;
	std::cin >> input;
	new_contact.set_birthday(input);

	std::cout << "Enter the contact's favourite meal, please." << std::endl;
	std::cin >> input;
	new_contact.set_favourite_meal(input);

	std::cout << "Enter the contact's underwear colour, please." << std::endl;
	std::cin >> input;
	new_contact.set_underwear_colour(input);

	std::cout << "Enter the contact's darkest secret, please." << std::endl;
	std::cin >> input;
	new_contact.set_darkest_secret(input);
	
	// new_contact.print();
	return (new_contact);
}

int		main( void) {
	std::string	input;
	Phonebook	my_phonebook;
	
	while (true) {
		std::cout << "Please enter your command: " << std::endl;
		std::cin >> input; //>> std::endl;
		if (input == "EXIT")
			break ;
		else if (input == "ADD") {
			Contact new_contact =  set_contact_info();

		}
	}
}
