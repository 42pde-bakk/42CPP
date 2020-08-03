/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 18:36:25 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 19:09:59 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

class Squad : public ISquad {
public:
	Squad();
	Squad( const Squad &old_squad);
	Squad	&operator=(const Squad &other);
	~Squad();
	int		getCount() const;
	ISpaceMarine *getUnit() const;
	int		push(ISpaceMarine *item);
private:
	int	count,
		capacity;
	ISpaceMarine** marines;
};

#endif
