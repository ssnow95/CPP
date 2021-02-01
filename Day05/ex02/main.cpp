/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:25:54 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/01 18:55:08 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Form form("Taxes", 50, 50);
	Bureaucrat bob("Bob", 46);
	Bureaucrat nency("Nency", 103);
	try
	{
		// //--------------------------test0-----------------------
		// form.beSigned(bob);
			// std::cout << form.getSigned() <<std::endl;
		// //--------------------------test1-----------------------
		// form.beSigned(nency);
		// nency.signForm(form);
			// std::cout << form.getSigned() <<std::endl;
		// //--------------------------test2-----------------------
		// 	Form form("Taxes", -1, 50);
		// //--------------------------test3-----------------------
		// 	Form form("Taxes", 1, 151);
		// //--------------------------test4-----------------------
		// 		Form *form = nullptr;
		// 		form->beSigned(bob);
			// std::cout << form.getSigned() <<std::endl;
		//--------------------------test5-----------------------
			// std::cout << form.getSigned() <<std::endl;
			// form.beSigned(bob);
			// std::cout << form.getSigned() <<std::endl;
			// bob.signForm(form);
			// form.beSigned(bob);
			// std::cout << form.getSigned() <<std::endl;
			// form.beSigned(bob);
			// std::cout << form.getSigned() <<std::endl;
			// bob.signForm(form);
		// --------------------------test6-----------------------
		// Form form1(form);
		// std::cout << form1 <<std::endl;	
			
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	
	
	return (0);
}