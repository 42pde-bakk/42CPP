/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 19:07:12 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/27 19:23:06 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
#include <string.h>
#include "Zombie.hpp"

class	ZombieEvent {
	public:
				ZombieEvent();
		void	setZombieType(int value);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump(void);
				~ZombieEvent();

	private:
		int _eventType;
};

#endif
