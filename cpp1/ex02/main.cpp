/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:56:40 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/15 19:53:19 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie *Zombie1 = new Zombie("Franky", "vegan");
	Zombie *Zombie2;
	Zombie *Zombie3;
	ZombieEvent ZombieEvent;

	
	Zombie1->announce();
	delete Zombie1;
	ZombieEvent.setZombieType("meat-eating");
	Zombie2 = ZombieEvent.newZombie("Molly");
	Zombie2->announce();
	delete Zombie2;
	Zombie3 = ZombieEvent.randomChump();
	return (0);
}

// clang++ -Wall -Wextra -Werror main.cpp ZombieEvent.cpp Zombie.cpp ZombieEvent.hpp