/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:51:33 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/19 10:14:55 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

Human::Human()
{
	return ;
}

Human::~Human()
{
	return ;
}

Brain &Human::GetBrain()
{
	return (this->_brain);
}

std::string Human::identify()
{
	return(GetBrain().identify());
}

