/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:14:41 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 15:20:14 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
#include <string>

class Enemy {
public:
	Enemy(/* args */);
	Enemy(int hp, std::string const &type);
	virtual ~Enemy();
	Enemy( const Enemy &old_enemy );
	Enemy& operator=( const Enemy &other );
	
	virtual void takeDamage(int dmg) = 0;
	std::string	getType() const;
	int			getHP() const;
protected:
	int			hp_;
	std::string	type_;
};

#endif
