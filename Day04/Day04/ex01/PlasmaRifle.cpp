/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:52:57 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 20:54:50 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
	this->_name = "Plasma Rifle";
	this->_damage = 21;
	this->_ap_cost = 5;
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
{
	*this = src;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const &src)
{
	this->_ap_cost = src._ap_cost;
	this->_damage = src._damage;
	this->_name = src._name;
	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout <<  "* piouuu piouuu piouuu *" << std::endl;
}