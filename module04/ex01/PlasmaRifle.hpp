/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:53:34 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 12:03:11 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
#include "AWeapon.hpp"
#include <string>

class PlasmaRifle : public AWeapon {
	public:
		PlasmaRifle(); 
		void	attack() const;
};

#endif
