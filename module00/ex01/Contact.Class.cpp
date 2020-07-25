/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.Class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 21:30:40 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/25 23:14:38 by pde-bakk      ########   odam.nl         */
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
void	Contact::print(void) {

	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Postal address: " << this->_postal_address << std::endl;
	std::cout << "Email address: " << this->_email_address << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Birthday date: " << this->_birthday << std::endl;
	std::cout << "Favourite meal: " << this->_favourite_meal << std::endl;
	std::cout << "Underwear colour: " << this->_underwear_colour << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}
