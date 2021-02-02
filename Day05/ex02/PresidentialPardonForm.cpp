/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:20:32 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/02 16:34:12 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25,5)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):Form("PresidentialPardonForm", 25,5)
{
	_target = src._target;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardonForm", 25,5) 
{
	this->_target = target;
}

void						PresidentialPardonForm::Action() const
{

	std::cout << this->_target<<" has been pardoned by Zafod Beeblebrox"<<std::endl;	
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
