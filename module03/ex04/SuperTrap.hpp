/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:47:24 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/02 18:40:58 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class SuperTrap : public FragTrap, public ScavTrap, public NinjaTrap {
public:
	SuperTrap();
	SuperTrap(const std::string name);
	// ~SuperTrap();
};

#endif
