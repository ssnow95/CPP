/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 19:07:37 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/22 14:46:28 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "Zer0";
	this->_armor_damage_reduction = 3;
	this->_energy_points = 50;
	this->_hit_points = 100;
	this->_level = 1;
	this->_ranged_attack_damage = 15;
	this->_max_hit_points = 100;
	this->_melee_attack_damage = 20;
	this->_max_energy_points = 50;
	std::cout<<this->_name<< ":(ScavTrap)" <<"Just tell me what to shoot."  <<std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &src)
{
	std::cout<<this->_name<< ":(ScavTrap)" <<"Hi, my clone."  <<std::endl;
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

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout<< this->_name<< ":(ScavTrap)"<< "Excellent." << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string name)
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

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap destroyed" <<std::endl;
	return ;
}

void 		ScavTrap::rangedAttack(std::string const & target)
{
	if (this->_hit_points == 0)
		this->get_death();
	else if (this->_energy_points - this->_ranged_attack_damage <= 0)
		std::cout <<this->_name<< ":(ScavTrap)" << "Munitions dry." << std::endl;
	else if (this->_energy_points - this->_ranged_attack_damage > 0)
	{
		std::cout<<this->_name<< ":(ScavTrap)" << "I'm covered in slag!.I must seek cover quickly or pain is coming" << std::endl;
		this->_energy_points -= this->_ranged_attack_damage;
	}
	this->get_info("rangedAttack", target);
}

void 		ScavTrap::meleeAttack(std::string const & target)
{
	if (this->_hit_points == 0)
		this->get_death();
	else if (this->_energy_points - this->_melee_attack_damage <= 0)
		std::cout<<this->_name<< ":(ScavTrap)" << "Where is my bullets?!?!?!" << std::endl;
	else if (this->_energy_points - this->_melee_attack_damage > 0)
	{
		std::cout<<this->_name<< ":(ScavTrap)" << "Yoo-hoo, stupid guy...You're powerless!" << std::endl;
		this->_energy_points -= this->_melee_attack_damage;
	}
	this->get_info("meleeAttack", target);
}

// int 		ScavTrap::getCountsOfDigits(long number)
// {
//     int count = (number == 0) ? 1 : 0;
// 	while (number != 0)
// 	{
// 		count++;
// 		number /= 10;
// 	}
// 	return count;
//  }

// void 		ScavTrap::takeDamage(unsigned int amount)
// {
// 		if(getCountsOfDigits(amount) <= 3)
// 	{
// 		if(amount <= this->_armor_damage_reduction)
// 			std::cout <<this->_name<< ":" <<  "Oh, are you killing me?" << std::endl;
// 		else if (this->_hit_points == 0)
// 			this->get_death();
// 		else if(amount > this->_armor_damage_reduction)
// 		{
// 			if(this->_armor_damage_reduction + this->_hit_points >= amount)
// 			{
// 				std::cout << this->_name<< ":" <<  "Not bad." << std::endl;
// 				this->_hit_points = (this->_hit_points + this->_armor_damage_reduction) - amount;
// 			}
// 			else if(this->_armor_damage_reduction + this->_hit_points < amount)
// 			{
// 				std::cout <<this->_name<< ":" <<  "I feel the burning.Eating through my equipment.Must stop, drop, and roll." << std::endl;
// 				this->_hit_points = 0;
// 				this->get_death();
// 			}
// 		}
// 		this->get_info("takeDamage", "");
// 	}
// 	else
// 		std::cout <<this->_name<< ":" << "I can't do it"<< std::endl;
// }

// void		ScavTrap::beRepaired(unsigned int amount)
// {
// 	this->returning_hit_points(amount);
// 	this->returning_energy_points(amount);
// }

// void		ScavTrap::returning_hit_points(unsigned int amount)
// {
// 	if(getCountsOfDigits(amount) <= 3)
// 	{
// 		if(this->_hit_points == this->_max_hit_points)
// 			std::cout <<this->_name<< ":" <<  "I can't be better then I am" << std::endl;
// 		else
// 		{
// 			if(this->_hit_points  + amount <= 0)
// 				this->get_death();
// 			else if(this->_hit_points  + amount > this->_max_hit_points)
// 			{
// 				std::cout <<this->_name<< ":" <<  "I feel my power!" << std::endl;
// 				this->_hit_points = this->_max_hit_points;
// 			}
// 			else
// 			{
// 				std::cout <<this->_name<< ":" << "I will not die here.I have too much left to do.And too much ammo."<< std::endl;
// 				this->_hit_points = this->_hit_points  + amount;
// 			}
// 		}
// 	}
// 	else
// 		std::cout <<this->_name<< ":" << "I can't do it"<< std::endl;
// }

// void		ScavTrap::returning_energy_points(unsigned int amount)
// {
// 		if(getCountsOfDigits(amount) <= 3)
// 	{
// 		if(this->_energy_points == this->_max_energy_points)
// 			std::cout <<this->_name<< ":" <<  "My energy can't be better then it is" << std::endl;
// 		else
// 		{
// 			if(amount == 0)
// 				std::cout << "I a-a-a-am turn-n-n-ing....off..." <<std::endl;
// 			else if(this->_energy_points  + amount > this->_max_energy_points)
// 			{
// 				std::cout <<this->_name<< ":" <<  "No ammo." << std::endl;
// 				this->_energy_points = this->_max_energy_points;
// 			}
// 			else
// 			{
// 				std::cout <<this->_name<< ":" << "I will kill you!"<< std::endl;
// 				this->_energy_points = this->_energy_points  + amount;
// 			}
// 		}
// 		this->get_info("beRepaired", "");
// 	}
// }

void		ScavTrap::rand_attack(int i)
{
	switch (i)
	{
		case 0:
		{
			std::cout<<this->_name<< ":(ScavTrap)" <<"Burst Combat!"<<std::endl;
			std::cout<<this->_name<< ":(ScavTrap)" << "it's crushing!" << std::endl;
		}
		case 1:
		{
			std::cout<<this->_name<< ":(ScavTrap)" <<"Big Pistol!"<<std::endl;
			std::cout<<this->_name<< ":(ScavTrap)" << "it's crushing!" << std::endl;
		}
		case 2:
		{
			std::cout<<this->_name<< ":(ScavTrap)" <<"Repeater!"<<std::endl;
			std::cout<<this->_name<< ":(ScavTrap)" << "it's crushing!" << std::endl;
		}
		case 3:
		{
			std::cout<<this->_name<< ":(ScavTrap)" <<"Revolver"<<std::endl;
			std::cout<<this->_name<< ":(ScavTrap)" << "it's crushing!" << std::endl;
		}
		case 4:
		{
			std::cout<<this->_name<< ":(ScavTrap)" <<"Rocket Launcher"<<std::endl;
			std::cout<<this->_name<< ":(ScavTrap)" << "it's crushing!" << std::endl;
		}
	}
}

void		ScavTrap::challengeNewcomer(std::string const & target)
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
			std::cout<<this->_name<< ":(ScavTrap)" << "No ammo." << std::endl;
		else if (this->_energy_points - energy >= 0)
		{
			rand_attack(i);
			this->_energy_points -= energy;
		}
		this->get_info(Attacks[i], target);
	}
}

// void		ScavTrap::get_info(std::string const & action, std::string const & target)
// {
// 	std::cout << "\x1b[1;35m*********************************************************************************\x1b[0m" << std::endl;
// 	std::cout <<"\x1b[1;35m|"<< std::setw(15) << "Name" << "|" << std::setw(15) << "Action"<< "|" << std::setw(15) << "Target" <<  "|";
// 	std::cout << std::setw(15) << "Energy points" <<  "|" << std::setw(15) << "Hit points" << "|\x1b[0m"<< std::endl;
// 	std::cout << "\x1b[1;35m*********************************************************************************\x1b[0m" << std::endl;
// 	std::cout << "\x1b[1;35m|\x1b[0m" << std::setw(15) << this->_name << "|" << std::setw(15) << action << "|";
// 	std::cout << std::setw(15)<< target << "|" <<std::setw(11)<< this->_energy_points << "/" << this->_max_energy_points << "|";
// 	std::cout << std::setw(11) << this->_hit_points << "/" << this->_max_hit_points << "\x1b[1;35m|\x1b[0m" << std::endl;
// 	std::cout << "\x1b[1;35m*********************************************************************************\x1b[0m" << std::endl;
// }

// void		ScavTrap::get_death()
// {
// 	std::cout <<this->_name << ":" <<"Last of the Corps, going out..."  <<std::endl;
// }