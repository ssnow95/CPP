/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 19:07:41 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/22 17:15:50 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	// std::string	_name;
	// unsigned int			_hit_points;
	// unsigned int			_max_hit_points;
	// unsigned int			_energy_points;
	// unsigned int			_max_energy_points;
	// unsigned int			_level;
	// unsigned int			_melee_attack_damage;
	// unsigned int			_ranged_attack_damage;
	// unsigned int			_armor_damage_reduction;
public:
				ScavTrap(void);
				~ScavTrap(void);
				ScavTrap(std::string name);
				ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const &src);
	void 		rangedAttack(std::string const & target);
	void 		meleeAttack(std::string const & target);
	// void		beRepaired(unsigned int amount);
	// void		returning_hit_points(unsigned int amount);
	// void		returning_energy_points(unsigned int amount);
	// void 		takeDamage(unsigned int amount);
	// void		get_info(std::string const & action, std::string const & target);
	// void		get_death();
	// int			getCountsOfDigits(long number);
	void		challengeNewcomer(std::string const & target);
	void		rand_attack(int i);
};



#endif