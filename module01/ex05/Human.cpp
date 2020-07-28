/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:22:53 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/28 10:35:42 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>

const	Brain&	Human::getBrain() const {
	return _human_brain;
}

const	Brain*	Human::identify() {
	return ( _human_brain.identify() );
}
