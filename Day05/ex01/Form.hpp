/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:16:44 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/01 18:43:33 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string			_name;
	bool						_signed;
	const int					_grade_rec_sign;
	const int					_grade_rec_exec;	
public:
								Form(std::string name, int grade_rec_sign, int grade_rec_exec);
								Form(Form const &src);
	std::string					getName() const;
	bool						getSigned() const;
	int							getGradeRecSign() const;
	int							getGradeRecExec() const;
	void						beSigned(Bureaucrat burea);						
								Form & operator=(Form const &src);
								~Form();
								class GradeTooHighException: public  std::exception
								{
									const char *what() const throw();
								};
								class GradeTooLowException: public std::exception
								{
									const char *what() const throw();
								};
								class NullParametr: public std::exception
								{
									const char *what() const throw();
								};
								class isSigned: public std::exception
								{
									const char *what() const throw();
								};
};

std::ostream& 				operator<<(std::ostream& o, Form const &src);


#endif