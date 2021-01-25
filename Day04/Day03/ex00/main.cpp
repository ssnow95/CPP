/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:47:35 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/21 19:05:55 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap a;
	std::string stop;


	a.rangedAttack("DF-05-A5");
	getline(std::cin, stop);
	a.takeDamage(50);
	getline(std::cin, stop);
	a.takeDamage(2);
	getline(std::cin, stop);
	a.takeDamage(40);
	getline(std::cin, stop);
	a.rangedAttack("Zer0");
	getline(std::cin, stop);
	a.meleeAttack("Dahl");
	getline(std::cin, stop);
	a.vaulthunter_dot_exe("Zer0");
	a.beRepaired(100);
	a.vaulthunter_dot_exe("Zer0");
	getline(std::cin, stop);
	a.rangedAttack("DF-05-A5");
	getline(std::cin, stop);
	a.takeDamage(70);
	getline(std::cin, stop);
	a.takeDamage(10);
	getline(std::cin, stop);
	a.beRepaired(0);
	getline(std::cin, stop);
	a.meleeAttack("Dahl");
	getline(std::cin, stop);
}