/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:43:17 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/22 18:45:13 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{
private:

public:
				SuperTrap(void);
				~SuperTrap(void);
				SuperTrap(SuperTrap const & src);
	SuperTrap & operator=(SuperTrap const &src);
	void 		rangedAttack(std::string const & target);
	void 		meleeAttack(std::string const & target);
};


#endif