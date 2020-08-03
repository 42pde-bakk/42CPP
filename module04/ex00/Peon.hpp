/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 09:11:43 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 09:39:56 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <string>
#include "Victim.hpp"

class	Peon : public Victim {
	public:
	Peon();
	Peon( const std::string &name );
	// Peon( const Peon &old_Peon );
	// Peon& operator=( const Peon &other );
	~Peon();
	
	// const std::string	&get_name() const;
	void				getPolymorphed() const;
	
};
// std::ostream&	operator<<(std::ostream& out, const Peon& self);

#endif
