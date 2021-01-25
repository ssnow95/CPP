/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 10:57:07 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/15 11:37:51 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	 ponyOnTheHeap(void)
{
	Pony *Nency = new Pony("Nency", "Irish", "10", "white",
						"Sem Simpson", "Apples", "frisky");
	Nency->get_info();
	delete Nency;
}

void	ponyOnTheStack(void)
{
	Pony Bobby = Pony("Bobby", "Falabella", "25", "black",
						"Jenny Jackson", "Carrot", "modest");
	Bobby.get_info();
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);			
}