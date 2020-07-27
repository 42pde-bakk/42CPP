/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 16:50:42 by peer          #+#    #+#                 */
/*   Updated: 2020/07/27 16:55:53 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setType(int value) {
	_type = value;
}

void	Zombie::setName(std::string str)
{
	_name = str;
}
