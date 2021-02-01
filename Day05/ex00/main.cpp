/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:50:07 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/01 15:41:35 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		// //---------------test0----------------
		// Bureaucrat jim("Jim", 134);
		// Bureaucrat bob("Bob", 3);
		// std::cout << jim <<std::endl;
		// jim.gradeDown();
		// std::cout << jim <<std::endl;
		// bob.gradeUp();
		// std::cout << bob <<std::endl;
		// bob.gradeUp();
		// std::cout << bob <<std::endl;
		// bob.gradeUp();
		// std::cout << bob <<std::endl;
		// //---------------test1----------------
		// Bureaucrat billy("Billy", 151);
		// std::cout << billy <<std::endl;
		// //---------------test2----------------
		// Bureaucrat karl("Karl", 0);
		// std::cout << karl <<std::endl;
		// //---------------test3----------------
		// Bureaucrat nency("Nency", 148);
		// nency.gradeDown();
		// std::cout << nency <<std::endl;
		// nency.gradeDown();
		// std::cout << nency <<std::endl;
		// nency.gradeDown();
		// std::cout << nency <<std::endl;
		// // ---------------test3----------------
		// Bureaucrat *nency = nullptr;
		// nency->gradeDown();
		// nency->gradeUp();
		// nency->getName();
		// // ---------------test4----------------
		// Bureaucrat nency("Nency", 148);
		// std::cout << nency <<std::endl;
		// Bureaucrat karl(nency);
		// std::cout << karl <<std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}