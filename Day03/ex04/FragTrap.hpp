/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:47:40 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/22 19:53:42 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
private:
public:
							FragTrap(void);
							FragTrap(std::string name);
							FragTrap(FragTrap const & src);
							~FragTrap(void);
							FragTrap & operator=(FragTrap const &src);
	void 					rangedAttack(std::string const & target);
	void 					meleeAttack(std::string const & target);
	void					vaulthunter_dot_exe(std::string const & target);
};


#endif