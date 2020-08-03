/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:31:26 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 15:20:35 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
#include <string>
#include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
	RadScorpion(/* args */);
	virtual ~RadScorpion();
	void	takeDamage(int dmg);
private:
	/* data */
};


#endif
