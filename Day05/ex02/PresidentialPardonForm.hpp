/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:37:20 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/02 16:33:46 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
class Form;
#include "Form.hpp"


class PresidentialPardonForm: public Form
{
private:
	std::string				_target;
								PresidentialPardonForm();
public:
							PresidentialPardonForm(PresidentialPardonForm const & src);
       						PresidentialPardonForm(std::string target);

        					~PresidentialPardonForm();
		void				Action() const;
        PresidentialPardonForm &operator=(const PresidentialPardonForm& o);
};

// std::ostream& 				operator<<(std::ostream& o, Form const &src);

#endif