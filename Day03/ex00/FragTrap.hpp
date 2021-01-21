/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:47:40 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/21 20:23:32 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>

class FragTrap
{
private:
	std::string	_name;
	unsigned int			_hit_points;
	unsigned int			_max_hit_points;
	unsigned int			_energy_points;
	unsigned int			_max_energy_points;
	unsigned int			_level;
	unsigned int			_melee_attack_damage;
	unsigned int			_ranged_attack_damage;
	unsigned int			_armor_damage_reduction;
public:
							FragTrap(void);
							FragTrap(std::string name);
							FragTrap(FragTrap const & src);
							~FragTrap(void);
							FragTrap & operator=(FragTrap const &src);
	void 					rangedAttack(std::string const & target);
	void 					meleeAttack(std::string const & target);
	void					beRepaired(unsigned int amount);
	void					returning_hit_points(unsigned int amount);
	void					returning_energy_points(unsigned int amount);
	void 					takeDamage(unsigned int amount);
	void					get_info(std::string const & action, std::string const & target);
	void					get_death();
	int						getCountsOfDigits(long number);
	void					vaulthunter_dot_exe(std::string const & target);
};


#endif