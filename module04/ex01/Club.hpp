/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Club.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 11:53:34 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/03 12:03:11 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLUB_HPP
# define CLUB_HPP
#include "AWeapon.hpp"
#include <string>

class Club : public AWeapon {
	public:
		Club();
		Club( const Club &old_weapon );
		Club& operator=( const Club &other );
		virtual ~Club();

		void	attack() const;
};

#endif
