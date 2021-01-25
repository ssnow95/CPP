/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 20:20:28 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/21 20:50:57 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
}