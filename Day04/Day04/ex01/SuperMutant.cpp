/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:53:49 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 20:55:17 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	this->_hp = 170;
	this->_type = "Super Mutant";
	std::cout <<  "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const & src)
{
	*this = src;
}

SuperMutant &	SuperMutant::operator=(SuperMutant const &src)
{
	this->_hp = src._hp;
	this->_type = src._type;
	return *this;
}

void	SuperMutant::takeDamage(int damage)
{
	damage = 3;
	if(this->_hp > 0)
	{
		this->_hp -= damage;
	}
}