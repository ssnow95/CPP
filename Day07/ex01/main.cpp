/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:49:26 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/08 12:14:58 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Awesome.hpp"


template <typename T>
void print(T symbol)
{
	std::cout << symbol <<std::endl;
}

int main()
{
	std::string arr1[] = {"hi", "hello", "bie", "goobie"};
	iter(arr1, 4, print);
	int arr2[] = {1,2,3,4,5,6,7,8,9,0};
	iter(arr2, 10, print);
	double arr3[] = {100,200,300,400,500,600,700,800,900,1000};
	iter(arr3, 10, print);
	char arr4[] = {'a','b','c','d','e','f','g','h','i','j','k'};
	iter(arr4, 11, print);
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
}