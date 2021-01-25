/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:31:54 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 20:54:40 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"  
	
PowerFist::PowerFist()
{
	this->_name = "Power Fist";
	this->_damage = 50;
	this->_ap_cost = 8;
	return ;
}

PowerFist::~PowerFist()
{
	return ;
}

PowerFist::PowerFist(PowerFist const & src)
{
	*this = src;
}

PowerFist & PowerFist::operator=(PowerFist const &src)
{
	this->_ap_cost = src._ap_cost;
	this->_damage = src._damage;
	this->_name = src._name;
	return *this;
}

void PowerFist::attack() const
{
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
}