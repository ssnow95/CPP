/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:07:11 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/07 17:31:16 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
template <typename T>

T max(T a, T b)
{
	if(a > b)
		return a;
	else if(a == b || b > a)
		return b;
	return 0;
}

template <typename T>

T min(T a, T b)
{
	if(a < b)
		return a;
	else if(a == b || b < a)
		return b;
	return 0;
}

template <typename T>

void swap(T &a, T &b)
{
	T tmp;
	
	tmp = a;
	a = b;
	b = tmp;
}