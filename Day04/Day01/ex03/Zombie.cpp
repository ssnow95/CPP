/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 20:03:05 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/19 10:15:20 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void Zombie::set_info(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

Zombie::Zombie(std::string name, std::string type)				
{
	this->_name = name;
	this->_type = type;
}

Zombie::Zombie()				
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Zombie died"  << std::endl;
}

void Zombie::announce()
{
	std::cout << this->_name<< "(" << this->_type<< ") " << "Braiiiiiiinnnssss..." << std::endl;
}