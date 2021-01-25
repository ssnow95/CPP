/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:29:36 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/25 21:13:48 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include <iostream>
#include "Enemy.hpp"

class Character
{
private:
	std::string		_name;
	int				_ap;
	AWeapon			*_weapon;
public:
					Character(Character const & src);
	Character &		operator=(Character const &src);
					Character(std::string const & name);
					~Character();
	void 			recoverAP();
	void 			equip(AWeapon* weapon);
	void 			attack(Enemy*enemy);
	std::string 	getName() const;
	int 			getAp() const;
	AWeapon 		*getWeapon() const;
};

std::ostream& 				operator<<(std::ostream& o, Character const &src);

Character::Character(std::string const & name)
{
	this->_ap = 40;
    this->_name = name;
    this->_weapon = NULL;
	return ;
}

Character::~Character()
{
}

void 			Character::recoverAP()
{
	if(this->_ap < 40)
	{
		if(this->_ap + 10 <= 40)
		{
			this->_ap += 10;
		}
	}
	else
	{
		this->_ap = 40;
	}
	
}

void 			Character::attack(Enemy *enemy)
{
	if(this->_weapon)
	{
		if((this->_ap - this->_weapon->getAPCost()) > 0)
		{
			this->_weapon->attack();
			enemy->takeDamage(this->_weapon->getDamage());
			this->_ap -= this->_weapon->getAPCost();
			std::cout << this->_name << " attacks " << enemy->getType() << "with a " << this->_weapon->getName() << std::endl;
		}
	}
}

AWeapon 	*Character::getWeapon() const
{
	return this->_weapon;
}

std::string 	Character::getName() const
{
	return this->_name;
}

int 			Character::getAp() const
{
	return this->_ap;
}

Character::Character(Character const & src)
{
	*this = src;
}

Character & Character::operator=(Character const &src)
{
	this->_ap = src._ap;
	this->_weapon = src._weapon;
	this->_name = src._name;
	return *this;
}

std::ostream& 				operator<<(std::ostream& o, Character const &src)
{
	if(src.getWeapon())
		o << src.getName()<< " has "<< src.getAp() << " and wields a " << src.getWeapon()->getName() <<std::endl;
	else
		o << src.getName()<< " has "<< src.getAp() << " and is unarmed" <<std::endl;
	return o;
}

void 			Character::equip(AWeapon* weapon)
{
	this->_weapon = weapon;
}


#endif