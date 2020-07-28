/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 12:35:20 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/28 17:48:10 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Pony
{
	private:
		static int	_Ponyamount;
		int			_weight;
		int			_length;
		std::string	_colour;
		std::string	_name;
	
	public:
		Pony( int size, int length, std::string colour, std::string name );
		void		displayPonyinfo( void) const;
		~Pony( void );
};
