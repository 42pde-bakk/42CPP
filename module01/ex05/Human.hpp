/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:19:39 by Peer          #+#    #+#                 */
/*   Updated: 2020/07/28 10:37:17 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <string>
# include <iostream>

class Human
{
public:
	const Brain&	getBrain() const;
	const Brain*	identify();
private:
	const Brain		_human_brain;
};



#endif
