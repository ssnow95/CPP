/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:18:22 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 20:47:25 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
protected:
	int			_hp;
	std::string	_type;
public:
				Enemy();
				Enemy(int hp, std::string const & type);
				virtual ~Enemy();
				Enemy(Enemy const & src);
	Enemy &		operator=(Enemy const &src);
	std::string	getType() const;
	int			getHP() const;
virtual void	takeDamage(int damage);
};

#endif