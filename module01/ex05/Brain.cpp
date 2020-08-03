/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:09:22 by Peer          #+#    #+#                 */
/*   Updated: 2020/08/03 11:44:43 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>

Brain::Brain() {
	_amountOfBraincells = 2;
	_smarts = 0;
}

const Brain*	Brain::identify() const {
	return this;
}
