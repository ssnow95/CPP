/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 19:58:50 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/19 10:15:25 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class					Zombie
{
	private:
			std::string	_type;
			std::string	_name;
	public:
						Zombie();
						Zombie(std::string name, std::string type);
						~Zombie();
			void		announce();
			void		set_info(std::string name, std::string type);
};

#endif