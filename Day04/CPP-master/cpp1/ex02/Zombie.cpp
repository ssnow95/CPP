/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:56:45 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/15 20:24:57 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)				
{
	this->_name = name;
	this->_type = type;
}

Zombie::~Zombie()
{
	std::cout << "Zombie deleted"  << std::endl; //если не работает то поэтому
}

void Zombie::announce()
{
	std::cout << this->_name<< "(" << this->_type<< ") " << "Braiiiiiiinnnssss..." << std::endl;
}