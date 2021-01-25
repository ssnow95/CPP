/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:27:27 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 20:40:08 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
	this->_hp = 80;
	this->_type = "RadScorpion";
	std::cout <<   "* click click click *" << std::endl;
	return ;
}

RadScorpion::~RadScorpion()
{
	std::cout <<  "* SPROTCH *" <<std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const & src)
{
	*this = src;
}

RadScorpion &	RadScorpion::operator=(RadScorpion const &src)
{
	this->_hp = src._hp;
	this->_type = src._type;
	return *this;
}