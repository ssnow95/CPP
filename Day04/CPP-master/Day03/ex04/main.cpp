/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:49:12 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/22 19:13:17 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	SuperTrap a;
	
	a.takeDamage(10);
	a.rangedAttack("B0r-");
	a.meleeAttack("Ammer0");
	a.rangedAttack("Sara GArdian");
	a.beRepaired(12);
	
}