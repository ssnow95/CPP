/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:19:49 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/02 16:34:08 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm", 72,45)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):Form("RobotomyRequestForm", 72,45)
{
	_target = src._target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestForm", 72,45) 
{
	this->_target = target;
}

void						RobotomyRequestForm::Action() const
{
	int rand;

	rand = std::rand() % 2;
	if(rand == 0)
	{
		std::cout << "bzzzzzzz.....bbbbbbbbbrrrrrrrrr.....bbbbbbbbhhhhhhhhrrrrr"<<std::endl;
		std::cout << this->_target <<" has been robotomized successfully"<<std::endl;
	}
	else
	{
		std::cout << "pppppphhhhh......"<<std::endl;
		std::cout << this->_target <<" has not been robotomized successfully"<<std::endl;
	}
	
}

// std::ostream& 				operator<<(std::ostream& o, Form const &src)
// {
// 	o << src.getName()<< ": ";
// 	if(src.getSigned() == true)
// 		o << "is signed";
// 	else
// 		o << "isn't signed";
// 	o << " grade required to sign: " << src.getGradeRecSign();
// 	o << " grade required to exec: " << src.getGradeRecExec();
	
// 	return o;
// }
