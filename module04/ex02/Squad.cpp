/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 10:47:16 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 12:08:08 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <string>
#include <iostream>

Squad::Squad() {
	this->_count = 0;
	this->_capacity = 5;
	this->_marines = new ISpaceMarine*[_capacity];
	// std::cout << "Squad of size " << this->_count << "/" << _capacity << " at the ready" << std::endl;
}

Squad::Squad(int size) {
	this->_count = 0;
	this->_capacity = size;
	this->_marines = new ISpaceMarine*[_capacity];
	// std::cout << "Squad of size " << this->_count << "/" << _capacity << " at the ready" << std::endl;
}

Squad::Squad( const Squad &old_squad) {
	// std::cout << "Squad copy constructor called!" << std::endl;
	this->_count = old_squad._count;
	this->_capacity = old_squad._capacity;
	this->_marines = new ISpaceMarine*[this->_capacity];
	for (int i = 0; i < this->_count; i++)
		this->_marines[i] = old_squad._marines[i]->clone();
	// *this = old_squad;
	// std::cout << "Squad of size " << this->_count << "/" << _capacity << " at the ready" << std::endl;

}

Squad&	Squad::operator=(const Squad &other) {
	for (int i = 0; i < this->_count; i++) {
		delete this->_marines[i];
	}
	delete[] this->_marines;

	this->_count = other._count;
	this->_capacity = other._capacity;

	this->_marines = new ISpaceMarine*[this->_capacity];
	for (int i = 0; i < this->_count; i++)
		this->_marines[i] = other._marines[i]->clone();
	return *this;
}

Squad::~Squad( ) {
	for (int i = 0; i < this->_count; i++) {
		delete this->_marines[i];
	}
	delete[] this->_marines;
}

int				Squad::getCount() const {
	return _count;
}

ISpaceMarine*	Squad::getUnit(int N) const {
	if (N < 0 || N >= _capacity)
		return (NULL);
	return (this->_marines[N]);
}

int				Squad::push(ISpaceMarine *newsoldier) {
	if (newsoldier == NULL)
		return (this->_count);
	for (int i = 0; i < this->_count; i++) {
		if (newsoldier == this->_marines[i])
			return (this->_count);
	}
	this->_marines[this->_count] = newsoldier;
	this->_count += 1;
	return (this->_count);
}
