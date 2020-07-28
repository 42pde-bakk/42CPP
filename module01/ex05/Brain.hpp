/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:02:35 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/28 10:39:28 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain
{
public:
	Brain();
	const Brain*	identify() const;
	// ~Brain();
private:
	int		_amountOfBraincells;
	int		_smarts;
	
};

#endif
