/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.Class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 20:38:04 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/25 23:10:02 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.Class.hpp"

class Phonebook {

public:
	Phonebook();
	int	add_contact(Contact& contact);
	~Phonebook();
private:
	Contact _contacts[8];
	int		_contact_count;

};

#endif
