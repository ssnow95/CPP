/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:23:32 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 14:52:31 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
private:
	std::string				_name;
							Peon();
public:
							Peon(std::string name);
							~Peon();
							Peon(Peon const & src);
	Peon &					operator=(Peon const &src);
	std::string				get_name() const;
	void					getPolymorphed()const;
};

std::ostream& 				operator<<(std::ostream& o, Peon const &src);

#endif