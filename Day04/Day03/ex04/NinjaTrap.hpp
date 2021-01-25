/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 15:01:58 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/22 19:53:28 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
private:

public:
							NinjaTrap(void);
							NinjaTrap(NinjaTrap const & src);
							~NinjaTrap(void);
							NinjaTrap & operator=(NinjaTrap const &src);
							void ninjaShoebox(ClapTrap const & ClapTrap);
							void ninjaShoebox(ScavTrap const & ScavTrap);
							void ninjaShoebox(FragTrap const & FragTrap);
							void ninjaShoebox(NinjaTrap const & NinjaTrap);
	void 					rangedAttack(std::string const & target);
	void 					meleeAttack(std::string const & target);
};


#endif