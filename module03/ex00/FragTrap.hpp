/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 16:47:24 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/02 14:18:36 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <string>

class FragTrap
{
public:
	FragTrap();
	FragTrap(const std::string name);
	FragTrap( const FragTrap &old_obj);
	FragTrap& operator=(const FragTrap &other);
	
	void	rangedAttack(std::string const &target);
	void	ActualRangedAttack(FragTrap &target);
	void	ActualMeleeAttack(FragTrap &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);


	~FragTrap();
private:
	std::string	_name;
	int			_hp,
				_maxhp,
				_ep,
				_maxep,
				_lvl,
				_melee_dmg,
				_ranged_dmg,
				_armor_reduc;
		
};

#endif
