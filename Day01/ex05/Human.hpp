/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:27:20 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/18 14:17:40 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

class Human
{
private:
	Brain _brain;
public:
	Human();
	~Human();
	std::string	identify();
	Brain	&GetBrain();
};

#endif