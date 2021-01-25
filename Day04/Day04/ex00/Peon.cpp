/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:22:36 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 14:44:28 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon::Peon()
{

	return ;
}

Peon &	Peon::operator=(Peon const &src)
{
	this->_name = src._name;
	return *this;
}

Peon::Peon(std::string name)
{
	this->_name = name;
	std::cout << "Some random victim called " << this->_name << " just appeared!" <<std::endl;
	std::cout << "Zog zog." << std::endl;
}

std::ostream& 				operator<<(std::ostream& o, Peon const &src)
{
	o << "I'm " << src.get_name() <<" and I like otters!" << std::endl;
	return o;
}

std::string	Peon::get_name() const
{
	return this->_name;
}

void					Peon::getPolymorphed()const
{
	std::cout <<this->_name << " has been turned into a pink pony!" << std::endl;
}