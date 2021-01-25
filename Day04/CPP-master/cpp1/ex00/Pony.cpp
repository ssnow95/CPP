/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 10:35:10 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/15 11:38:32 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Pony.hpp"

Pony::Pony(std::string name, std::string breed, std::string age,std::string color,
						std::string	owner, std::string favorite_food,std::string character)				
{
	this->_name = name;
    this->_breed = breed;
    this->_age = age;
    this->_color = color;
    this->_owner = owner;
    this->_favorite_food = favorite_food;
    this->_character = character;
}

Pony::~Pony()
{
    return ;
}

void Pony::get_info(void)
{
	std::cout<< "\x1b[32mname: \x1b[0m" << this->_name << std::endl;
	std::cout<< "\x1b[32mbreed: \x1b[0m" << this->_breed<< std::endl;
	std::cout<< "\x1b[32mage: \x1b[0m" << this->_age << std::endl;
	std::cout<< "\x1b[32mcolor: \x1b[0m" << this->_color << std::endl;
	std::cout<< "\x1b[32mowner: \x1b[0m" << this->_owner << std::endl;
	std::cout<< "\x1b[32mfavorite_food: \x1b[0m" << this->_favorite_food << std::endl;
	std::cout<< "\x1b[32mcharacter: \x1b[0m" << this->_character << std::endl << std::endl;					
}
