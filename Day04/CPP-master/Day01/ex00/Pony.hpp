/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 10:21:26 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/18 19:58:25 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
#include <iostream>
#include <string>

class				Pony
{
	private:
		std::string	_name;
		std::string	_breed;
		std::string	_age;
		std::string	_color;
		std::string	_owner;
		std::string	_favorite_food;
		std::string	_character;
	public:
					Pony(std::string name, std::string breed, std::string age,std::string color,
						std::string	owner, std::string favorite_food,std::string character);
					~Pony(void);
		void		get_info(void);
};

int					main(void);

#endif