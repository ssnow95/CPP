/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:56:28 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/22 14:40:05 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_name = "3G0-TP";
	this->_armor_damage_reduction = 5;
	this->_energy_points = 100;
	this->_hit_points = 100;
	this->_level = 1;
	this->_ranged_attack_damage = 20;
	this->_max_hit_points = 100;
	this->_melee_attack_damage = 30;
	this->_max_energy_points = 100;
	std::cout <<this->_name<< ":(FragTrap)" <<"Let me teach you the ways of magic!"  <<std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const &src)
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

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout<<this->_name<< ":(FragTrap)" << "Hey everybody! Check out my package!" << std::endl;
	*this = src;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_armor_damage_reduction = 5;
	this->_energy_points = 100;
	this->_hit_points = 100;
	this->_level = 1;
	this->_ranged_attack_damage = 20;
	this->_max_hit_points = 100;
	this->_melee_attack_damage = 30;
	this->_max_energy_points = 100;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap destroyed" <<std::endl;
	return ;
}

void 		FragTrap::rangedAttack(std::string const & target)
{
	if (this->_hit_points == 0)
		this->get_death();
	else if (this->_energy_points - this->_ranged_attack_damage <= 0)
		std::cout <<this->_name<< ":(FragTrap)" << "I'm out of ammo!" << std::endl;
	else if (this->_energy_points - this->_ranged_attack_damage > 0)
	{
		std::cout<<this->_name<< ":(FragTrap)" << "What happened to you?.So strong, imposing, fearsome.Oh yeah, I am killing you." << std::endl;
		this->_energy_points -= this->_ranged_attack_damage;
	}
	this->get_info("rangedAttack", target);
}

void 		FragTrap::meleeAttack(std::string const & target)
{
	if (this->_hit_points == 0)
		this->get_death();
	else if (this->_energy_points - this->_melee_attack_damage <= 0)
		std::cout<<this->_name<< ":(FragTrap)" << "I'm out of ammo!" << std::endl;
	else if (this->_energy_points - this->_melee_attack_damage > 0)
	{
		std::cout<<this->_name<< ":(FragTrap)" << "You're powerless!" << std::endl;
		this->_energy_points -= this->_melee_attack_damage;
	}
	this->get_info("meleeAttack", target);
}

// int 		FragTrap::getCountsOfDigits(long number)
// {
//     int count = (number == 0) ? 1 : 0;
// 	while (number != 0)
// 	{
// 		count++;
// 		number /= 10;
// 	}
// 	return count;
//  }

// void 		FragTrap::takeDamage(unsigned int amount)
// {
// 		if(getCountsOfDigits(amount) <= 3)
// 	{
// 		if(amount <= this->_armor_damage_reduction)
// 			std::cout <<this->_name<< ":" <<  "The impossible has happened. I... am... bored." << std::endl;
// 		else if (this->_hit_points == 0)
// 			this->get_death();
// 		else if(amount > this->_armor_damage_reduction)
// 		{
// 			if(this->_armor_damage_reduction + this->_hit_points >= amount)
// 			{
// 				std::cout << this->_name<< ":" <<  " I don't die so easily" << std::endl;
// 				this->_hit_points = (this->_hit_points + this->_armor_damage_reduction) - amount;
// 			}
// 			else if(this->_armor_damage_reduction + this->_hit_points < amount)
// 			{
// 				std::cout <<this->_name<< ":" <<  "Last of the Corps, going out." << std::endl;
// 				this->_hit_points = 0;
// 				this->get_death();
// 			}
// 		}
// 		this->get_info("takeDamage", "");
// 	}
// 	else
// 		std::cout <<this->_name<< ":" << "you want to deceive me!!!"<< std::endl;
// }

// void		FragTrap::beRepaired(unsigned int amount)
// {
// 	this->returning_hit_points(amount);
// 	this->returning_energy_points(amount);
// }

// void		FragTrap::returning_hit_points(unsigned int amount)
// {
// 	if(getCountsOfDigits(amount) <= 3)
// 	{
// 		if(this->_hit_points == this->_max_hit_points)
// 			std::cout <<this->_name<< ":" <<  "I can't be more alive than now" << std::endl;
// 		else
// 		{
// 			if(this->_hit_points  + amount <= 0)
// 				this->get_death();
// 			else if(this->_hit_points  + amount > this->_max_hit_points)
// 			{
// 				std::cout <<this->_name<< ":" <<  "ha ha ha!" << std::endl;
// 				this->_hit_points = this->_max_hit_points;
// 			}
// 			else
// 			{
// 				std::cout <<this->_name<< ":" << "Death will never capture me!"<< std::endl;
// 				this->_hit_points = this->_hit_points  + amount;
// 			}
// 		}
// 	}
// 	else
// 		std::cout <<this->_name<< ":" << "you want to deceive me!!!"<< std::endl;
// }

// void		FragTrap::returning_energy_points(unsigned int amount)
// {
// 		if(getCountsOfDigits(amount) <= 3)
// 	{
// 		if(this->_energy_points == this->_max_energy_points)
// 			std::cout <<this->_name<< ":" <<  "Time for a scrap!" << std::endl;
// 		else
// 		{
// 			if(amount == 0)
// 				std::cout << "I don't feel my power" <<std::endl;
// 			else if(this->_energy_points  + amount > this->_max_energy_points)
// 			{
// 				std::cout <<this->_name<< ":" <<  "ha ha ha!" << std::endl;
// 				this->_energy_points = this->_max_energy_points;
// 			}
// 			else
// 			{
// 				std::cout <<this->_name<< ":" << "Let's duel, you and I.So we can compare weapons.And know who is more skilled."<< std::endl;
// 				this->_energy_points = this->_energy_points  + amount;
// 			}
// 		}
// 		this->get_info("beRepaired", "");
// 	}
// }

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_hit_points == 0)
		this->get_death();
	else
	{
		int	i = 0;
		int	energy = 25;
		std::string Attacks[5] = {"Burst Combat", "Big Pistol", "Repeater", "Revolver", "Rocket Launcher"};
		srand(rand() % 1000);
		i = rand() % 5;
		if (this->_energy_points - energy < 0)
			std::cout<<this->_name<< ":(FragTrap)" << "I'm out of ammo!" << std::endl;
		else if (this->_energy_points - energy >= 0)
		{
			std::cout<<this->_name<< ":(FragTrap)" << "You're powerless!" << std::endl;
			this->_energy_points -= energy;
		}
		this->get_info(Attacks[i], target);
	}
}

// void		FragTrap::get_info(std::string const & action, std::string const & target)
// {
// 	std::cout << "\x1b[1;33m*********************************************************************************\x1b[0m" << std::endl;
// 	std::cout <<"\x1b[1;33m|"<< std::setw(15) << "Name" << "|" << std::setw(15) << "Action"<< "|" << std::setw(15) << "Target" <<  "|";
// 	std::cout << std::setw(15) << "Energy points" <<  "|" << std::setw(15) << "Hit points" << "|\x1b[0m"<< std::endl;
// 	std::cout << "\x1b[1;33m*********************************************************************************\x1b[0m" << std::endl;
// 	std::cout << "\x1b[1;33m|\x1b[0m" << std::setw(15) << this->_name << "|" << std::setw(15) << action << "|";
// 	std::cout << std::setw(15)<< target << "|" <<std::setw(11)<< this->_energy_points << "/" << this->_max_energy_points << "|";
// 	std::cout << std::setw(11) << this->_hit_points << "/" << this->_max_hit_points << "\x1b[1;33m|\x1b[0m" << std::endl;
// 	std::cout << "\x1b[1;33m*********************************************************************************\x1b[0m" << std::endl;
// }

// void		FragTrap::get_death()
// {
// 	std::cout <<this->_name << ":" <<"I'M DEAD I'M DEAD OHMYGOD I'M DEAD!"  <<std::endl;
// }