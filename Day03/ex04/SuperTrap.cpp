/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:44:31 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/22 19:53:21 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	this->_name = "SUper-3tAr";
    this->_armor_damage_reduction = 5;
    this->_energy_points = 120;
    this->_hit_points = 100;
    this->_level = 1;
    this->_ranged_attack_damage = 20;
    this->_max_hit_points = 100;
    this->_melee_attack_damage = 60;
    this->_max_energy_points = 120;
    std::cout <<this->_name<< ":(SuperTrap)" <<"I'm the best!"  <<std::endl;
    return ;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Destructor SuperTrap destroyed" <<std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const & src)
{
	*this = src;
}

SuperTrap & SuperTrap::operator=(SuperTrap const &src)
{
	std::cout<<this->_name<< ":(SuperTrap)" <<"I'm super!I'm star!"  <<std::endl;
	this->_name = src._name;
	this->_armor_damage_reduction = src._armor_damage_reduction;
	this->_energy_points = src._energy_points;
	this->_hit_points = src._hit_points;
	this->_level = src._level;
	this->_ranged_attack_damage = src._ranged_attack_damage;
	this->_max_hit_points = src._max_hit_points;
	this->_melee_attack_damage = src._melee_attack_damage;
	this->_max_energy_points = src._max_energy_points;
	return *this;
}

void 		SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void 		SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}