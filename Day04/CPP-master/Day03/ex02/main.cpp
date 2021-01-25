/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:59:27 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/22 14:48:21 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	ScavTrap robot1;
	FragTrap robot2;
	std::string stop;
	
	robot1.takeDamage(10);
	getline(std::cin, stop);
	robot2.takeDamage(40);
	getline(std::cin, stop);
	robot1.challengeNewcomer("Cl0p");
	getline(std::cin, stop);
	robot2.vaulthunter_dot_exe("V0mp5");
	getline(std::cin, stop);
	robot2.rangedAttack("Am0rt");
	getline(std::cin, stop);
	robot1.rangedAttack("H6er-00");
	getline(std::cin, stop);
	robot1.beRepaired(20);
	getline(std::cin, stop);
	robot2.beRepaired(15);
	getline(std::cin, stop);
	
	
}
