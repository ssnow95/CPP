/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:29:52 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 20:36:28 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
	return ;
}

Enemy::Enemy(int hp, std::string const & type)
{
	this-> _hp = hp;
	this->_type = type;
}

Enemy::~Enemy()
{
	return ;
}

std::string	Enemy::getType() const
{
	return this->_type;
}

int			Enemy::getHP() const
{
	return this->_hp;
}

void		Enemy::takeDamage(int damage)
{
	if(this->_hp >= 0)
		this->_hp -= damage;
}

Enemy::Enemy(Enemy const & src)
{
	*this = src;

}

Enemy & Enemy::operator=(Enemy const &src)
{
	this->_hp = src._hp;
	this->_type = src._type;
	return *this;
}