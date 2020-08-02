/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:47:24 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/02 17:30:39 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "BasicTrap.hpp"
#include <string>

class ScavTrap : public BasicTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string name);
	void	challengeNewcomer(std::string const & target);
};

#endif
