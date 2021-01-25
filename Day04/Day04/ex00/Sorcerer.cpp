/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:23:34 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 13:45:31 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
}

Sorcerer::Sorcerer()
{
	return ;
}

Sorcerer &	Sorcerer::operator=(Sorcerer const &src)
{
	this->_name = src._name;
	this->_title = src._title;
	return *this;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ", "<< this->_title << " , is born!" << std::endl;
	return ;
}

std::string	Sorcerer::get_name() const
{
	return this->_name;
}

std::string	Sorcerer::get_title() const
{
	return this->_title;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << " , is dead. Consequences will never be the same!" << std::endl;
	return ;
}

std::ostream& operator<<(std::ostream& o, Sorcerer const &src)
{
	o << "I am " << src.get_name() << "," << src.get_title() << " , and I like ponies!" << std::endl;
	return o;
}

void Sorcerer::polymorph(Victim const &victum) const
{
	victum.getPolymorphed();	
}