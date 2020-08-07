/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 10:00:57 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 11:09:42 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
#include "AMateria.hpp"
// #include "ICharacter.hpp"
#include <string>

class	Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);
		~Cure();
		
		Cure* clone() const;
		void use(ICharacter& target);

	private:
		unsigned int	_xp;
		// std::string		_type;
};

#endif
