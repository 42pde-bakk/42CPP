/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 16:39:50 by peer          #+#    #+#                 */
/*   Updated: 2020/07/27 20:39:05 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
	public:
				Zombie();
		void	setName(std::string str);
		void	setType(int value);
		void	announce() const;
				~Zombie();

	private:
		std::string	_name;
		int			_type;
};

#endif
