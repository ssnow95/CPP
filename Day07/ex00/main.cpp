/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:05:03 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/08 12:09:59 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "Awesome.hpp"

int main( void ) 
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	double i = 0;
	double j = 100;
	::swap( i, j );
	std::cout << "i = " << i << ", j = " << j << std::endl;
	std::cout << "min( i, j ) = " << ::min( i, j ) << std::endl;
	std::cout << "max( i, j ) = " << ::max( i, j ) << std::endl;

	i = -10;
	j = -10;
	::swap( i, j );
	std::cout << "i = " << i << ", j = " << j << std::endl;
	std::cout << "min( i, j ) = " << ::min( i, j ) << std::endl;
	std::cout << "max( i, j ) = " << ::max( i, j ) << std::endl;


	float ii = -10;
	float jj = -100;
	::swap( ii, jj );
	std::cout << "ii = " << ii << ", jj = " << jj << std::endl;
	std::cout << "min( ii, jj ) = " << ::min( ii, jj ) << std::endl;
	std::cout << "max( ii, jj ) = " << ::max( ii, jj ) << std::endl;
	
	Awesome z = 90;
	Awesome w = 80;

	::swap( z, w );
	std::cout << "z = " << z << " w = " << w << std::endl;
	std::cout << "min( z, w ) = " << ::min( z, w ) << std::endl;
	std::cout << "max( z, w ) = " << ::max( z, w ) << std::endl;
	return 0;
}
