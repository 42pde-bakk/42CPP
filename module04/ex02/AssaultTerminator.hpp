/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 10:45:50 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/05 12:18:11 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine 
{
public:
	AssaultTerminator(/* args */);
	AssaultTerminator( const AssaultTerminator& old_marine);
	AssaultTerminator& operator=(const AssaultTerminator& other);
	~AssaultTerminator();
	AssaultTerminator*	clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
private:
	/* data */
};

#endif
