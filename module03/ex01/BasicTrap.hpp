/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BasicTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:47:24 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/02 17:28:35 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASICTRAP_HPP
# define BASICTRAP_HPP
#include <string>

class BasicTrap {
public:
	BasicTrap(); // we dont use this one
	BasicTrap(const std::string type, const std::string name);
	BasicTrap( const BasicTrap &old_obj);
	BasicTrap& operator=(const BasicTrap &other);

	std::string	getRandomColour();
	void	rangedAttack(std::string const &target);
	void	ActualRangedAttack(BasicTrap &target);
	void	ActualMeleeAttack(BasicTrap &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	~BasicTrap();
protected:
	std::string	_name,
				_colour,
				_classname;

	int			_hp,
				_maxhp,
				_ep,
				_maxep,
				_lvl,
				_melee_dmg,
				_ranged_dmg,
				_armor_reduc;
private:
};

#endif
