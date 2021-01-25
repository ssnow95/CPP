/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:28:27 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/22 17:23:54 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "GG-00";
	this->_armor_damage_reduction = 5;
	this->_energy_points = 100;
	this->_hit_points = 100;
	this->_level = 1;
	this->_ranged_attack_damage = 20;
	this->_max_hit_points = 100;
	this->_melee_attack_damage = 30;
	this->_max_energy_points = 100;
	std::cout <<this->_name<< ":(ClapTrap)" <<"Go with me!"  <<std::endl;
	return ;
}

const std::string& ClapTrap::getName() const {
	return _name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap destroyed" <<std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &src)
{
	this->_name = src._name;
	this->_armor_damage_reduction = src._armor_damage_reduction;
	this->_energy_points = src._energy_points;
	this->_hit_points = src._hit_points;
	this->_level = src._level;
	this->_ranged_attack_damage = src._ranged_attack_damage;
	this->_max_hit_points = src._max_hit_points;
	this->_melee_attack_damage = src._melee_attack_damage;
	this->_max_energy_points = src._max_energy_points;
	return *this;
}

int 		ClapTrap::getCountsOfDigits(long number)
{
    int count = (number == 0) ? 1 : 0;
	while (number != 0)
	{
		count++;
		number /= 10;
	}
	return count;
 }

void 		ClapTrap::takeDamage(unsigned int amount)
{
		if(getCountsOfDigits(amount) <= 3)
	{
		if(amount <= this->_armor_damage_reduction)
			std::cout <<this->_name<< ":(ClapTrap)" <<  "The impossible has happened. I... am... bored." << std::endl;
		else if (this->_hit_points == 0)
			this->get_death();
		else if(amount > this->_armor_damage_reduction)
		{
			if(this->_armor_damage_reduction + this->_hit_points >= amount)
			{
				std::cout << this->_name<< ":(ClapTrap)" <<  " I feel the hurt...time for a rampage!" << std::endl;
				this->_hit_points = (this->_hit_points + this->_armor_damage_reduction) - amount;
			}
			else if(this->_armor_damage_reduction + this->_hit_points < amount)
			{
				std::cout <<this->_name<< ":(ClapTrap)" <<  "I'm taking you with me..." << std::endl;
				this->_hit_points = 0;
				this->get_death();
			}
		}
		this->get_info("takeDamage", "");
	}
	else
		std::cout <<this->_name<< ":(ClapTrap)" << "you want to deceive me!!!"<< std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	this->returning_hit_points(amount);
	this->returning_energy_points(amount);
}

void		ClapTrap::returning_hit_points(unsigned int amount)
{
	if(getCountsOfDigits(amount) <= 3)
	{
		if(this->_hit_points == this->_max_hit_points)
			std::cout <<this->_name<< ":(ClapTrap)" <<  "I can't add hit points" << std::endl;
		else
		{
			if(this->_hit_points  + amount <= 0)
				this->get_death();
			else if(this->_hit_points  + amount > this->_max_hit_points)
			{
				std::cout <<this->_name<< ":(ClapTrap)" <<  "he he he!" << std::endl;
				this->_hit_points = this->_max_hit_points;
			}
			else
			{
				std::cout <<this->_name<< ":(ClapTrap)" << "Thanks for your hit points"<< std::endl;
				this->_hit_points = this->_hit_points  + amount;
			}
		}
	}
	else
		std::cout <<this->_name<< ":(ClapTrap)" << "it's wrong!!!"<< std::endl;
}

void		ClapTrap::returning_energy_points(unsigned int amount)
{
		if(getCountsOfDigits(amount) <= 3)
	{
		if(this->_energy_points == this->_max_energy_points)
			std::cout <<this->_name<< ":(ClapTrap)" <<  "I am full of power" << std::endl;
		else
		{
			if(amount == 0)
				std::cout<<this->_name<< ":(ClapTrap)"  << "I am not full of power" <<std::endl;
			else if(this->_energy_points  + amount > this->_max_energy_points)
			{
				std::cout <<this->_name<< ":(ClapTrap)" <<  "ho ho ho!" << std::endl;
				this->_energy_points = this->_max_energy_points;
			}
			else
			{
				std::cout <<this->_name<< ":(ClapTrap)" << "I can kill you now"<< std::endl;
				this->_energy_points = this->_energy_points  + amount;
			}
		}
		this->get_info("beRepaired", "");
	}
}

void		ClapTrap::get_info(std::string const & action, std::string const & target)
{
	std::cout << "\x1b[1;35m*********************************************************************************\x1b[0m" << std::endl;
	std::cout <<"\x1b[1;35m|"<< std::setw(15) << "Name" << "|" << std::setw(15) << "Action"<< "|" << std::setw(15) << "Target" <<  "|";
	std::cout << std::setw(15) << "Energy points" <<  "|" << std::setw(15) << "Hit points" << "|\x1b[0m"<< std::endl;
	std::cout << "\x1b[1;35m*********************************************************************************\x1b[0m" << std::endl;
	std::cout << "\x1b[1;35m|\x1b[0m" << std::setw(15) << this->_name << "|" << std::setw(15) << action << "|";
	std::cout << std::setw(15)<< target << "|" <<std::setw(11)<< this->_energy_points << "/" << this->_max_energy_points << "|";
	std::cout << std::setw(11) << this->_hit_points << "/" << this->_max_hit_points << "\x1b[1;35m|\x1b[0m" << std::endl;
	std::cout << "\x1b[1;35m*********************************************************************************\x1b[0m" << std::endl;
}

void		ClapTrap::get_death()
{
	std::cout <<this->_name << ":" <<"I'M DEAD I'M DEAD OHMYGOD I'M DEAD!"  <<std::endl;
}