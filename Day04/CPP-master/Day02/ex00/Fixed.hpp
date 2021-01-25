/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:59:27 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/19 16:36:56 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
	int					_value;
	static const int	_bits;
public:
					Fixed(void);
					Fixed(Fixed const & src);
					~Fixed(void);
	int 			getRawBits (void ) const;
	void			setRawBits( int const raw );
	Fixed &			operator=(Fixed const &src);
};

#endif