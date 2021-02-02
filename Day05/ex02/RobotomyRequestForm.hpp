/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 19:36:12 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/02 16:33:50 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
class Form;
#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm: public Form
{
private:
	std::string				_target;
								RobotomyRequestForm();
public:
							RobotomyRequestForm(RobotomyRequestForm const & src);
       						RobotomyRequestForm(std::string target);

        					~RobotomyRequestForm();
		void				Action() const;
        RobotomyRequestForm &operator=(const RobotomyRequestForm& o);
};

// std::ostream& 				operator<<(std::ostream& o, Form const &src);

#endif