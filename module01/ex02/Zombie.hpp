/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 16:39:50 by peer          #+#    #+#                 */
/*   Updated: 2020/07/27 16:55:20 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
	public:
		void	setName(std::string str);
		void	setType(int value);
		void	announce();

	private:
		std::string	_name;
		int			_type;
};

#endif
