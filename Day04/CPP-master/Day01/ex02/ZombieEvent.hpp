/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:57:00 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/15 19:47:06 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include "Zombie.hpp"


class					ZombieEvent
{
	private:
			std::string	_type;
	public:
						ZombieEvent();
						~ZombieEvent();
			void		setZombieType(std::string type);
			Zombie*		newZombie(std::string name);
			Zombie* 	randomChump();
};

#endif