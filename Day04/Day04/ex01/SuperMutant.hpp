/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:33:48 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 18:04:18 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant: public Enemy
{
private:
public:
					SuperMutant();
					~SuperMutant();
					SuperMutant(SuperMutant const & src);
	SuperMutant &	operator=(SuperMutant const &src);
	virtual void  	takeDamage(int damage);
};


#endif