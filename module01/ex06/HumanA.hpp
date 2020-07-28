/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:52:39 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/28 11:43:38 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <string>

class	HumanA {
	public:
		HumanA(std::string name, Weapon& weapon);
		void	attack() const;
	private:
		std::string	_humanName;
		Weapon&	_humanWeapon; // It's a reference, so that if I change the clubtype in the main, 
							  // its changed here cus the reference still points to the same object
};


#endif
