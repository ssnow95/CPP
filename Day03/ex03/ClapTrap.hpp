/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:28:31 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/22 17:23:14 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>


class ClapTrap
{
protected:
	std::string				_name;
	unsigned int			_hit_points;
	unsigned int			_max_hit_points;
	unsigned int			_energy_points;
	unsigned int			_max_energy_points;
	unsigned int			_level;
	unsigned int			_melee_attack_damage;
	unsigned int			_ranged_attack_damage;
	unsigned int			_armor_damage_reduction;
	
public:
							ClapTrap();
							~ClapTrap();
							ClapTrap(ClapTrap const & src);
							ClapTrap & operator=(ClapTrap const &src);
	void					get_info(std::string const & action, std::string const & target);
	void					get_death();
	const std::string& 		getName() const;
	void					beRepaired(unsigned int amount);
	int 					getCountsOfDigits(long number);
	void 					takeDamage(unsigned int amount);
	void					returning_hit_points(unsigned int amount);
	void					returning_energy_points(unsigned int amount);
};


#endif