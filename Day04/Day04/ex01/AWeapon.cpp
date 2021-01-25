/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:15:19 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 20:35:24 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	return ;
}

AWeapon::~AWeapon()
{
	return ;
}

std::string AWeapon::getName() const
{
	return this->_name;
}

int AWeapon::getAPCost() const
{
	return this->_ap_cost;
}

int AWeapon::getDamage() const
{
	return this->_damage;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_damage = damage;
	this->_ap_cost = apcost;
}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
}

AWeapon & AWeapon::operator=(AWeapon const &src)
{
	this->_ap_cost = src._ap_cost;
	this->_damage = src._damage;
	this->_name = src._name;
	return *this;
}
