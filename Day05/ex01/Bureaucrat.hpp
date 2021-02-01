/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:19:12 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/01 18:14:58 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
class Form;
#include "Form.hpp"

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
	Bureaucrat();
public:
						Bureaucrat(std::string name, int grade);
						Bureaucrat(Bureaucrat const &src);
						Bureaucrat & operator=(Bureaucrat const &src);
						~Bureaucrat();
						class GradeTooHighException: public std::exception
						{
							const char    *what() const throw();
						};
						class GradeTooLowException: public std::exception
						{
							const char    *what() const throw();
						};
						class incorrect_parametr: public std::exception
						{
							const char    *what() const throw();
						};
						std::string getName() const;
						int getGrade() const;
						void gradeUp();
						void gradeDown();
						void signForm(Form sign);
											
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const &src);

#endif