/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:56:54 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/15 19:48:00 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()				
{
	return ;
}

ZombieEvent::~ZombieEvent()
{
    return ;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, this->_type);
	return(zombie);
}

Zombie* ZombieEvent::randomChump()
{
	Zombie			*Zombie;
	int				random;
	unsigned int	j = 0;
	unsigned int	i = 4;

	std::string NamesZombie[10] = {"Bobby", "Maria", "Billy",
  "Wally", "Jesse", "Stevie", "Tommy", "Timmy", "Lassy", "Sara"};
	while(j < i)
	{
		random = rand() % 10;
		Zombie = this->newZombie(NamesZombie[random]);
		Zombie->announce();
		delete(Zombie);
		j++;
	}
	return (Zombie);
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}