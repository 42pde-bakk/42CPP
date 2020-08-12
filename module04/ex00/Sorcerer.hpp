/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 09:11:43 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/12 21:07:38 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <string>
#include "Victim.hpp"

class	Sorcerer {
public:
	Sorcerer( const std::string &name, const std::string &title );
	Sorcerer( const Sorcerer &old_sorcerer );
	Sorcerer& operator=( const Sorcerer &other );
	~Sorcerer();
	
	const std::string	&get_name() const;
	const std::string	&get_title() const;
	void				polymorph(Victim const &target) const;

private:
	Sorcerer();
	std::string	_name,
				_title;
	
};
std::ostream&	operator<<(std::ostream& out, const Sorcerer& self);

#endif
