/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:23:40 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 14:20:37 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	return ;
}

Victim::Victim(std::string name)
{
	this->_name = name;
	std::cout << "Some random victim called " << this->_name << " just appeared!" <<std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " <<this->_name << "just died for no apparent reason!" << std::endl;
	return ;
}

Victim::Victim(Victim const & src)
{
	*this = src;
}

Victim & Victim::operator=(Victim const &src)
{
	this->_name = src._name;
	return *this;
}

std::string	 Victim::get_name() const
{
	return this->_name;
}

std::ostream& 				operator<<(std::ostream& o, Victim const &src)
{
	o << "I'm " << src.get_name() <<" and I like otters!" << std::endl;
	return o;
}

void					Victim::getPolymorphed()const
{
	std::cout <<this->_name << " has been turned into a cute little sheep!" << std::endl;
}