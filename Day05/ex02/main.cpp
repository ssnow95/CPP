/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:25:54 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/02 17:23:21 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// int main()
// {
// 	ShrubberyCreationForm a("Patrik");
//     RobotomyRequestForm b("Bob");
//     PresidentialPardonForm c("Pef");
// 	Bureaucrat bob("Bob", 45);
// 	Bureaucrat den("Den", 4);
// 	// Bureaucrat nency("Nency", 103);
// 	try
// 	{
// 		// //--------------------------test0-----------------------
// 		b.beSigned(den);
// 		den.signForm(b);
// 		b.execute(den);
// 		a.beSigned(den);
// 		den.signForm(a);
// 		a.execute(den);
// 		c.beSigned(den);
// 		den.signForm(c);
// 		c.execute(den);
// 		// c.getSigned();
// 		// std::cout << c <<std::endl;
// 		// b.execute(bob);
// 		// std::cout << b <<std::endl;
		
			
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	

	
	
// 	return (0);
// }

int main(void)
{
	srand(time(0));

	std::cout << "---------- 2 ----------" << std::endl;

	try
	{
		Bureaucrat				bob2("bob2", 146);
		ShrubberyCreationForm	s2("forma s2");
		s2.execute(bob2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 3 ----------" << std::endl;

	try
	{
		Bureaucrat				bob3("bob3", 146);
		ShrubberyCreationForm	s3("forma s3");

		bob3.signForm(s3);
		s3.execute(bob3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 4 ----------" << std::endl;

	try
	{
		Bureaucrat				bob4("bob4", 140);
		ShrubberyCreationForm	s4("forma s4");

		bob4.signForm(s4);
		s4.execute(bob4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 5 ----------" << std::endl;

	try
	{
		Bureaucrat				bob5("bob5", 130);
		ShrubberyCreationForm	s5("forma s5");

		bob5.signForm(s5);
		s5.execute(bob5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 6 ----------" << std::endl;

	try
	{
		Bureaucrat			bob6("bob6", 146);
		RobotomyRequestForm	s6("forma s6");
		s6.execute(bob6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 7 ----------" << std::endl;

	try
	{
		Bureaucrat			bob7("bob7", 80);
		RobotomyRequestForm	s7("forma s7");

		bob7.signForm(s7);
		s7.execute(bob7);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 8 ----------" << std::endl;

	try
	{
		Bureaucrat			bob8("bob8", 50);
		RobotomyRequestForm	s8("forma s8");

		bob8.signForm(s8);
		s8.execute(bob8);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 9 ----------" << std::endl;

	try
	{
		Bureaucrat				bob9("bob9", 30);
		RobotomyRequestForm	s9("forma s9");

		bob9.signForm(s9);
		s9.execute(bob9);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 10 ----------" << std::endl;

	try
	{
		Bureaucrat				bob10("bob10", 30);
		PresidentialPardonForm	s10("forma s10");
		s10.execute(bob10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 11 ----------" << std::endl;

	try
	{
		Bureaucrat				bob11("bob11", 30);
		PresidentialPardonForm	s11("forma s11");

		bob11.signForm(s11);
		s11.execute(bob11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 12 ----------" << std::endl;

	try
	{
		Bureaucrat				bob12("bob12", 10);
		PresidentialPardonForm	s12("forma s12");

		bob12.signForm(s12);
		s12.execute(bob12);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 13 ----------" << std::endl;

	try
	{
		Bureaucrat				bob13("bob13", 1);
		PresidentialPardonForm	s13("forma s13");

		bob13.signForm(s13);
		s13.execute(bob13);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 14 ----------" << std::endl;

	try
	{
		Bureaucrat				bob14("bob14", 146);
		ShrubberyCreationForm	s14("forma s14");
		bob14.executeForm(s14);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 15 ----------" << std::endl;

	try
	{
		Bureaucrat				bob15("bob15", 146);
		ShrubberyCreationForm	s15("forma s15");

		bob15.signForm(s15);
		bob15.executeForm(s15);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 16 ----------" << std::endl;

	try
	{
		Bureaucrat				bob16("bob16", 140);
		ShrubberyCreationForm	s16("forma s16");

		bob16.signForm(s16);
		bob16.executeForm(s16);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 17 ----------" << std::endl;

	try
	{
		Bureaucrat				bob17("bob17", 130);
		ShrubberyCreationForm	s17("forma s17");

		bob17.signForm(s17);
		bob17.executeForm(s17);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 18 ----------" << std::endl;

	try
	{
		Bureaucrat			bob18("bob18", 146);
		RobotomyRequestForm	s18("forma s18");
		bob18.executeForm(s18);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 19 ----------" << std::endl;

	try
	{
		Bureaucrat			bob19("bob19", 80);
		RobotomyRequestForm	s19("forma s19");

		bob19.signForm(s19);
		bob19.executeForm(s19);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 20 ----------" << std::endl;

	try
	{
		Bureaucrat			bob20("bob20", 50);
		RobotomyRequestForm	s20("forma s20");

		bob20.signForm(s20);
		bob20.executeForm(s20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 21 ----------" << std::endl;

	try
	{
		Bureaucrat				bob21("bob21", 30);
		RobotomyRequestForm	s21("forma s21");

		bob21.signForm(s21);
		bob21.executeForm(s21);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 22 ----------" << std::endl;

	try
	{
		Bureaucrat				bob22("bob22", 30);
		PresidentialPardonForm	s22("forma s22");
		bob22.executeForm(s22);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 23 ----------" << std::endl;

	try
	{
		Bureaucrat				bob23("bob23", 30);
		PresidentialPardonForm	s23("forma s23");

		bob23.signForm(s23);
		bob23.executeForm(s23);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 24 ----------" << std::endl;

	try
	{
		Bureaucrat				bob24("bob24", 10);
		PresidentialPardonForm	s24("forma s24");

		bob24.signForm(s24);
		bob24.executeForm(s24);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------- 25 ----------" << std::endl;

	try
	{
		Bureaucrat				bob25("bob25", 1);
		PresidentialPardonForm	s25("forma s25");

		bob25.signForm(s25);
		bob25.executeForm(s25);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}



