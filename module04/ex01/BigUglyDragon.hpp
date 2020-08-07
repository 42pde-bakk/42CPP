/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BigUglyDragon.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:31:26 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/07 16:17:08 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIGUGLYDRAGON_HPP
# define BIGUGLYDRAGON_HPP
#include <string>
#include "Enemy.hpp"

class BigUglyDragon : public Enemy {
public:
	BigUglyDragon(/* args */);
	BigUglyDragon( const BigUglyDragon &other );
	BigUglyDragon& operator=( const BigUglyDragon &other );
	virtual ~BigUglyDragon();
private:
	/* data */
};


#endif
