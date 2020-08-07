/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:31:26 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 16:32:03 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
#include <string>
#include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
	RadScorpion(/* args */);
	RadScorpion( const RadScorpion &other );
	RadScorpion& operator=( const RadScorpion &other );
	virtual ~RadScorpion();
private:
	/* data */
};


#endif
