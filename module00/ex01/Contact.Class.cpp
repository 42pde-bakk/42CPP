/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.Class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 21:30:40 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/26 01:59:43 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

void	Contact::set_firstname(std::string name) { _first_name = name;}
void	Contact::set_lastname(std::string name) { _last_name = name;}
void	Contact::set_nickname(std::string name) { _nickname = name;}
void	Contact::set_login(std::string login) { _login = login;}
void	Contact::set_postal_address(std::string address) { _postal_address = address;}
void	Contact::set_email_address(std::string address) { _email_address = address;}
void	Contact::set_phone_number(std::string number) { _phone_number = number;}
void	Contact::set_birthday(std::string day) { _birthday = day;}
void	Contact::set_favourite_meal(std::string meal) { _favourite_meal = meal;}
void	Contact::set_underwear_colour(std::string colour) { _underwear_colour = colour;}
void	Contact::set_darkest_secret(std::string secret) { _darkest_secret = secret;}
void	Contact::print_field(std::string str) {
	
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void	Contact::print_contact(int index) {

	std::cout << std::setw(10) << index << "|";
	this->print_field(_first_name);
	std::cout << "|";
	this->print_field(_last_name);
	std::cout << "|";
	this->print_field(_nickname);
	std::cout << std::endl;
}

void	Contact::print_all_contact_fields(void) {
	std::cout	<< _first_name << std::endl
				<< _last_name << std::endl
				<< _nickname << std::endl
				<< _login << std::endl
				<< _postal_address << std::endl
				<< _email_address << std::endl
				<< _phone_number << std::endl
				<< _birthday << std::endl
				<< _favourite_meal << std::endl
				<< _underwear_colour << std::endl
				<< _darkest_secret << std::endl;
}
