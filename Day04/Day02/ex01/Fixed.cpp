/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 17:36:21 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/19 19:06:21 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;
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

Fixed::Fixed(const int nmb):_value(nmb << this->_bits)
{
	std::cout <<"Int constructor called" <<std::endl;
}

Fixed::Fixed(const float nmb):_value(roundf(nmb * (1 << this->_bits)))
{
	std::cout <<"Float constructor called" <<std::endl;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_value /(float)( 1 << this->_bits));
}
int Fixed::toInt( void ) const
{
	return this->_value >> this->_bits;
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

std::ostream& operator<<(std::ostream& o, Fixed const &src)
{
	o << src.toFloat();
	return o;
}
