/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:54:11 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 18:27:26 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>

class RadScorpion: public Enemy
{
private:
public:
					RadScorpion();
					~RadScorpion();
					RadScorpion(RadScorpion const & src);
	RadScorpion &	operator=(RadScorpion const &src);
};

#endif