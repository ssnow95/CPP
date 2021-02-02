/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:20:03 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/02 17:38:47 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
{
	_grade = grade;
	if(_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if(_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

int Bureaucrat::getGrade() const
{
	if(this != nullptr)
		return (this->_grade);
	else
		throw Bureaucrat::incorrect_parametr();
	
}

std::string Bureaucrat::getName() const
{
	if(this != nullptr)
		return (this->_name);
	else
		throw Bureaucrat::incorrect_parametr();
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &src)
{
	_grade = src._grade;
	return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src):_name(src._name)
{
	if(&src == nullptr)
		throw Bureaucrat::incorrect_parametr();
	_grade = src._grade;
}

void Bureaucrat::gradeUp()
{
	if(this != nullptr)
	{
		if(this->_grade - 1 > 0)
			this->_grade -= 1;
		else
			throw Bureaucrat::GradeTooHighException();
	}
	else
		throw Bureaucrat::incorrect_parametr();
	
}
void Bureaucrat::gradeDown()
{
	if(this != nullptr)
	{
		if(this->_grade + 1 <= 150)
			this->_grade += 1;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	else
		throw Bureaucrat::incorrect_parametr();
}

std::ostream& 				operator<<(std::ostream& o, Bureaucrat const &src)
{
	o << src.getName()<< " , bureaucrat grade " << src.getGrade() <<std::endl;
	return o;
}

const char   *Bureaucrat:: GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

const char   *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char   *Bureaucrat::errorForm::what() const throw()
{
	return ("Form cannot be used.");
}

const char   *Bureaucrat::incorrect_parametr::what() const throw()
{
	return ("parametr is null");
}

void Bureaucrat::signForm(Form &sign)
{
	if(&sign == nullptr)
		throw Bureaucrat::incorrect_parametr();
	sign.beSigned(*this);
	if(sign.getSigned() == true)
		std::cout <<this->_name << " signs form: " << sign.getName() << std::endl;	
	else
		std::cout <<this->_name << "  cannot sign form: " << sign.getName() << " ,because " <<this->_name << " doesn't have enough grade" << std::endl;
}

void Bureaucrat::executeForm (Form const & form)
{
	if(&form == nullptr)
		throw Bureaucrat::incorrect_parametr();
	else
	{
		form.execute(*this);
	}
}