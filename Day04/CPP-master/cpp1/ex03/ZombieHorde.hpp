/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 20:01:26 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/15 20:46:49 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>
#include <string>

class ZombieHorde
{
private:
	Zombie		*great_horde;
	int n;
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void set_info(std::string name, std::string type);
	void		announce();
};

#endif