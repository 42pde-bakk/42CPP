/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.Class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 20:38:04 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/28 09:51:19 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.Class.hpp"
#include <iomanip>
#include <iostream>

class Phonebook {

public:
  Phonebook();
  bool add_contact(Contact contact);
  void print_selected_contact(int index);
  void print_list(void);
  ~Phonebook();

private:
  Contact _contacts[8];
  int _contacts_count;
};

#endif
