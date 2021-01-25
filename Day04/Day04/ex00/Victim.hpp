/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:23:43 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 15:06:05 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Victim_HPP
#define Victim_HPP

#include <iostream>
#include <string>

class Victim
{
protected:
	std::string				_name;
							Victim();
public:
							Victim(Victim const & src);
	Victim &				operator=(Victim const &src);
							Victim(std::string name);
							virtual ~Victim();
	std::string				get_name() const;
	virtual void			getPolymorphed()const;
};
std::ostream& 				operator<<(std::ostream& o, Victim const &src);
#endif