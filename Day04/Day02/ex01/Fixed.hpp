/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 17:36:09 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/19 19:03:57 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	_bits;
public:
					Fixed(void);
					Fixed(Fixed const & src);
					Fixed(const int nmb);
					Fixed(const float nmb);
					~Fixed(void);
	int 			getRawBits (void ) const;
	void			setRawBits( int const raw );
	Fixed &			operator=(Fixed const &src);
	float 			toFloat( void ) const;
	int 			toInt( void ) const;
};
std::ostream& operator<<(std::ostream& o, Fixed const &src);
#endif