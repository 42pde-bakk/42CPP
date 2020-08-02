/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:47:24 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/02 17:28:35 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>

class ClapTrap {
public:
	ClapTrap(); // we dont use this one
	ClapTrap(const std::string type, const std::string name);
	ClapTrap( const ClapTrap &old_obj);
	ClapTrap& operator=(const ClapTrap &other);

	std::string	getRandomColour();
	void	rangedAttack(std::string const &target);
	void	ActualRangedAttack(ClapTrap &target);
	void	ActualMeleeAttack(ClapTrap &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	~ClapTrap();
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
