/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 19:07:41 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/22 19:15:37 by ssnowbir         ###   ########.fr       */
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
public:
				ScavTrap(void);
				~ScavTrap(void);
				ScavTrap(std::string name);
				ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const &src);
	void 		rangedAttack(std::string const & target);
	void 		meleeAttack(std::string const & target);
	void		challengeNewcomer(std::string const & target);
	void		rand_attack(int i);
};

#endif