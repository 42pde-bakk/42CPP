/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 10:00:57 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 11:09:40 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);
		~Ice();
		
		Ice* clone() const;
		void use(ICharacter& target);

	private:
		unsigned int	_xp;
};

#endif
