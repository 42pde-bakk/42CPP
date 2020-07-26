/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.Class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 20:37:48 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/26 02:04:27 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.Class.hpp"

Phonebook::Phonebook( void ){_contacts_count = 0;}

bool	Phonebook::add_contact(Contact& contact) {
	if (_contacts_count >= 8)
		return false;
	_contacts[_contacts_count] = contact;
	_contacts_count++;
	return true;
}

void	Phonebook::print_selected_contact(int index) {
	
	if (index < 0 || index > 7 || index >= this->_contacts_count) {
		std::cout << "Sorry, this index is invalid." << std::endl;
		return ;
	}
	_contacts[index].print_all_contact_fields();
}

void	Phonebook::print_list(void) {

	std::cout << std::setw(10) << "index" << "|" << "first name" << "|" << "last name" << "|" << "nickname" << std::endl;
	
	for (int i = 0; i < _contacts_count; i++)
		_contacts[i].print_contact(i);
}

Phonebook::~Phonebook( void) {}
