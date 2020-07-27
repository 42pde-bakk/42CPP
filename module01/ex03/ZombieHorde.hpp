/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 20:39:20 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/27 20:56:39 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <string>

class	ZombieHorde {
	public:
		ZombieHorde(int N);
		~ZombieHorde();
	private:
		std::string	randomName(void);
		Zombie	*_nZombies;
};

#endif
