/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:53:34 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 12:03:11 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
#include "AWeapon.hpp"
#include <string>

class PowerFist : public AWeapon {
	public:
		PowerFist();
		void	attack() const;
};

#endif
