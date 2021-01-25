/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:15:16 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 20:46:27 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
protected:
	std::string					_name;
	int							_damage;
	int							_ap_cost;
								AWeapon();
public:
								AWeapon(std::string const & name, int apcost, int damage);
								virtual ~AWeapon();
								AWeapon(AWeapon const & src);
	AWeapon &					operator=(AWeapon const &src);
	std::string 				getName() const;
	int							getAPCost() const;
	int							getDamage() const;
	virtual void      			attack(void) const = 0;
};

#endif