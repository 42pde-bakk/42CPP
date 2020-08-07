/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Stooge.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 09:11:43 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 14:40:06 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STOOGE_HPP
# define STOOGE_HPP
# include <string>
#include "Victim.hpp"

class	Stooge : public Victim {
	public:
	Stooge( const std::string &name );
	Stooge( const Stooge &old_Stooge );
	Stooge& operator=( const Stooge &other );
	virtual ~Stooge(); //this is retarded and bad practice
	
	void				getPolymorphed() const;

private:	
	Stooge();
};
// std::ostream&	operator<<(std::ostream& out, const Stooge& self);

#endif
