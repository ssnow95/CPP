/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:59:29 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/19 17:07:07 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


const int Fixed::_bits(8);
Fixed::Fixed(void):_value(0)
{
	std::cout<< "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout<< "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout <<"Destructor called" <<std::endl;
	return ;
}
int	Fixed::getRawBits(void ) const
{
	std::cout <<"getRawBits member function called" <<std::endl;
	return this->_value;
}

void Fixed::setRawBits( int const raw )
{
	std::cout <<"setRawBits member function called" <<std::endl;
	this->_value = raw;
}

Fixed &			Fixed::operator=(Fixed const &src)
{
	std::cout <<"Assignation operator called" <<std::endl;
	this->_value = src._value;
	return (*this);
}