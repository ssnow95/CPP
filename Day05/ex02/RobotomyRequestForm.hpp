/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 19:36:12 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/01 19:40:32 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	/* data */
public:
		RobotomyRequestForm(std::string const & src);
        RobotomyRequestForm();
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm& o);
};

RobotomyRequestForm::RobotomyRequestForm()
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}


#endif