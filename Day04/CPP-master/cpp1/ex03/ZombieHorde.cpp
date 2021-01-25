/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 20:00:41 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/15 20:55:36 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"



ZombieHorde::ZombieHorde(int n)
{
	int i = 0;
	int random;
	this->n = n;
	this->great_horde = new Zombie[n];
	std::string NamesZombie[10] = {"Bobby", "Maria", "Billy", 
									"Wally", "Jesse", "Stevie", "Tommy", "Timmy", "Lassy", "Sara"};
	while(i < n)
	{
		random = rand() % 10;
		great_horde[i].set_info(NamesZombie[random], "meat-eating");
		i++;
	}
	return ;
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->great_horde;
	return ;
}

void ZombieHorde::announce()
{
	int i = 0;
	while(i < this->n)
	{
		this->great_horde[i].announce();
		i++;
	}
	
}
