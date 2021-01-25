/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:38:19 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/18 14:13:06 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

Brain::Brain()
{
	this->_width = 0;
	this->_iq = 0;
}

Brain::~Brain()
{
	return ;
}

std::string Brain::identify(void)
{
	std::stringstream hex;
	hex << this;
	return(hex.str());
}