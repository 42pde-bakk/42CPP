/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:31:26 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/05 09:02:38 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
#include <string>
#include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
	SuperMutant(/* args */);
	// ~SuperMutant();
	virtual ~SuperMutant();
	// void	takeDamage(int dmg);
private:
	/* data */
};


#endif
