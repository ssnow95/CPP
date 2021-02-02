/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 12:19:30 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/02 16:33:51 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
class Form;
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	std::string				_target;
								ShrubberyCreationForm();
public:
							ShrubberyCreationForm(std::string target);
							~ShrubberyCreationForm();
							ShrubberyCreationForm(ShrubberyCreationForm const & src);
	void					Action() const;
   	ShrubberyCreationForm 	&operator=(const ShrubberyCreationForm& src);
};

// std::ostream& 				operator<<(std::ostream& o, Form const &src);

#endif