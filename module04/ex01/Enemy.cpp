/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 13:18:58 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/05 09:04:05 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <iostream>
#include <string>

Enemy::Enemy() : hp_(0), type_("default") {
}

Enemy::Enemy(int hp, std::string const &type)
	: hp_(hp), type_(type) {
}

Enemy::~Enemy() {
}

Enemy::Enemy(const Enemy &old_enemy) {
	*this = old_enemy;
}

Enemy& Enemy::operator=( const Enemy &other) {
	if (this != &other) {
		type_ = other.type_;
		hp_ = other.hp_;
	}
	return *this;
}

void	Enemy::takeDamage(int dmg) {
	if (dmg < 0)
		std::cerr << "cmon bruv, cant attack for negative damage..." << std::endl;
	else {
		hp_ -= dmg;
		if (hp_ < 0)
			hp_ = 0;
		std::cout << "Enemy " << type_ << " took " << dmg << " damage, and is now at " << hp_ << "hp." << std::endl;
	}
}

std::string	Enemy::getType() const {
	return type_;
}

int			Enemy::getHP() const {
	return hp_;
}
