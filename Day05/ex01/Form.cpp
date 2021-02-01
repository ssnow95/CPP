/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:16:47 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/01 18:50:45 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade_rec_sign, int grade_rec_exec): _name(name), _grade_rec_sign(grade_rec_sign), _grade_rec_exec(grade_rec_exec)
{
	this->_signed = false;
	if(_grade_rec_sign < 1 || _grade_rec_exec < 1)
		throw Form::GradeTooHighException();
	if(_grade_rec_sign > 150 || _grade_rec_exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &src):_name(src._name), _grade_rec_sign(src._grade_rec_sign), _grade_rec_exec(src._grade_rec_exec)
{
	if(&src == nullptr)
		throw Form::NullParametr();
	if(_grade_rec_sign < 1 || _grade_rec_exec < 1)
		throw Form::GradeTooHighException();
	if(_grade_rec_sign > 150 || _grade_rec_exec > 150)
		throw Form::GradeTooLowException();
	this->_signed = src._signed;
}

Form & Form::operator=(Form const &src)
{
	this->_signed = src._signed;
	return *this;
}

std::string	Form::getName() const
{
	if(this != nullptr)
		return (this->_name);
	else
		throw Form::NullParametr();
}


int	Form::getGradeRecSign() const
{
	if(this != nullptr)
		return (this->_grade_rec_sign);
	else
		throw Form::NullParametr();
}

int	Form::getGradeRecExec() const
{
	if(this != nullptr)
		return (this->_grade_rec_exec);
	else
		throw Form::NullParametr();
}

bool Form::getSigned() const
{
	if(this != nullptr)
		return (this->_signed);
	else
		throw Form::NullParametr();
}

Form::~Form()
{
	return ;
}

std::ostream& 				operator<<(std::ostream& o, Form const &src)
{
	o << src.getName()<< ": ";
	if(src.getSigned() == true)
		o << "is signed";
	else
		o << "isn't signed";
	o << " grade required to sign: " << src.getGradeRecSign();
	o << " grade required to exec: " << src.getGradeRecExec();
	
	return o;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade's form is too high");
};

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade's form is too low");
};

const char *Form::NullParametr::what() const throw()
{
	return ("parametr is null");
};
const char *Form::isSigned::what() const throw()
{
	return ("Form is signed");
};

void Form::beSigned(Bureaucrat burea)
{
	if(this->_signed == true)
	{
		throw Form::isSigned();
	}
	if(&burea == nullptr || this == nullptr)
		throw Form::NullParametr();
	if(this->_grade_rec_sign > burea.getGrade())
	{
		this->_signed = true;
	}
	else
		throw Form::GradeTooLowException();
}