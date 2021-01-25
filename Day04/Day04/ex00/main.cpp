/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:22:32 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 13:54:52 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "Sorcerer.hpp"
	#include "Victim.hpp"
	#include "Peon.hpp"
	
	int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return (0);
}