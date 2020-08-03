/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:30:03 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 16:40:32 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>

class Character {
public:
	Character(/* args */);
	Character( std::string const &name);
	Character( const Character &old_char);
	Character& operator=(const Character &other);
	~Character();
	void recoverAP();
	void equip(AWeapon* wp);
	void attack(Enemy* target);
	std::string getName() const;
	int			getAP() const;
	AWeapon	*getWeapon() const;
private:
	std::string	_name;
	int			_ap;
	AWeapon*	_weapon;

};
std::ostream&	operator<<(std::ostream& out, const Character& self);


#endif
