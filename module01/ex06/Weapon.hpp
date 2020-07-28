/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:47:29 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/28 11:00:21 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>

class	Weapon {
	public:
		Weapon(std::string weapon);
		const std::string& getType() const;
		void	setType(std::string type);	
	private:
		std::string	_type;
};

#endif
