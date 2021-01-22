/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:59:27 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/22 17:18:30 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	ScavTrap robot1;
	FragTrap robot2;
	ClapTrap robot3;
	NinjaTrap robot4;
	std::string stop;
	
	robot1.takeDamage(10);
	getline(std::cin, stop);
	robot2.takeDamage(40);
	getline(std::cin, stop);
	robot3.takeDamage(40);
	getline(std::cin, stop);
	robot4.takeDamage(50);
	getline(std::cin, stop);
	robot4.ninjaShoebox(robot1);
	getline(std::cin, stop);
	robot4.ninjaShoebox(robot2);
	getline(std::cin, stop);
	robot4.ninjaShoebox(robot3);
	getline(std::cin, stop);
	robot4.ninjaShoebox(robot4);
	getline(std::cin, stop);
	robot1.challengeNewcomer("Cl0p");
	getline(std::cin, stop);
	robot4.rangedAttack("robot-0074");
	getline(std::cin, stop);
	robot2.beRepaired(7);
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
