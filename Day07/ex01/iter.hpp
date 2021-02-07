/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:49:59 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/07 17:53:36 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void iter(T *arr, int len, void (*func)(T &))
{
	int i = 0;
	while(i < len)
	{
		func(arr[i]);
		i++;
	}
}