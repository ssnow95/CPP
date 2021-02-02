/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:58:52 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/02 16:42:57 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreationForm", 145,137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm", 145,137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form("ShrubberyCreationForm", 145,137)
{
	this->_target = src._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm 	& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	this->_target = src._target;
	return *this;
}

void					ShrubberyCreationForm::Action() const
{
	std::string filename;
	std::ofstream file;

	filename = this->_target + "_shrubbery";
	file.open(filename);

file << \
			"               ,@@@@@@@,                 " << std::endl << \
			"       ,,,.   ,@@@@@@/@@,  .oo8888o.     " << std::endl << \
			"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o    " << std::endl << \
			"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'   " << std::endl << \
			"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'   " << std::endl << \
			"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'    " << std::endl << \
			"   `&%\\ ` /%&'    |.|        \\ '|8'      " << std::endl << \
			"       |o|         | |         | |        " << std::endl << \
			"       |.|         | |         | |        " << std::endl << \
			"    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_";

	file.close();
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
