/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:52:39 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/28 11:42:56 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <string>

class	HumanB {
	public:
				HumanB(std::string name);
		void	setWeapon(Weapon& weapon);
		void	attack() const;
	private:
		std::string _humanName;
		Weapon		*_humanWeapon;
};


#endif
