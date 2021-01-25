/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:23:37 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 15:05:59 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string				_name;
	std::string				_title;
	Sorcerer();
public:
							Sorcerer(Sorcerer const & src);
							Sorcerer(std::string name, std::string title);
	Sorcerer &				operator=(Sorcerer const &src);
							~Sorcerer(void);
	std::string				get_name() const;
	std::string				get_title()const;
	void					polymorph(Victim const &victum) const;
};
std::ostream& 				operator<<(std::ostream& o, Sorcerer const &src);

#endif