/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:48:18 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 20:54:30 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
private:
public:
	void      			attack(void) const;
								PlasmaRifle();
	virtual							~PlasmaRifle();
								PlasmaRifle(PlasmaRifle const & src);
	PlasmaRifle &				operator=(PlasmaRifle const &src);
};

#endif