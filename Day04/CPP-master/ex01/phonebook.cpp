/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 18:41:01 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/06 11:46:00 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook()
{
    return ;
}

phonebook::~phonebook()
{
    return ;
}
int phonebook::check_contact()
{
	if(	this->first_name.empty() &&
		this->last_name.empty() &&
		this->nickname.empty() &&
		this->login.empty() &&
		this->postal_address.empty() &&
		this->email_address.empty() &&
		this->phone_number.empty() &&
		this->birthday_date.empty() &&
		this->favorite_meal.empty() &&
		this->underwear_color.empty() &&
		this->darkest_secret.empty())
			return (0);
	else
		return (1);
}

void phonebook::add_contact(int id)
{
	this->id = id;
    std::cout<< "\x1b[32menter first name: \x1b[0m";
    getline(std::cin, this->first_name);
    std::cout<< "\x1b[32menter last name: \x1b[0m";
    getline(std::cin, this->last_name);
    std::cout<< "\x1b[32menter nickname: \x1b[0m";
    getline(std::cin, this->nickname);
    std::cout<< "\x1b[32menter login: \x1b[0m";
    getline(std::cin, this->login);
    std::cout<< "\x1b[32menter postal adress: \x1b[0m";
    getline(std::cin, this->postal_address);
    std::cout<< "\x1b[32menter email address: \x1b[0m";
    getline(std::cin, this->email_address);
    std::cout<< "\x1b[32menter phone number: \x1b[0m";
    getline(std::cin, this->phone_number);
    std::cout<< "\x1b[32menter birthday date: \x1b[0m";
    getline(std::cin, this->birthday_date);
    std::cout<< "\x1b[32menter favorite meal: \x1b[0m";
    getline(std::cin, this->favorite_meal);
    std::cout<< "\x1b[32menter underwear color: \x1b[0m";
    getline(std::cin, this->underwear_color);
    std::cout<< "\x1b[32menter darkest secret: \x1b[0m";
    getline(std::cin, this->darkest_secret);
}
void phonebook::search_contact()
{
	std::cout<< "\x1b[34mfirs name:\x1b[0m"<<this->first_name<<std::endl;
	std::cout<< "\x1b[34mlast name:\x1b[0m"<<this->last_name<<std::endl;
	std::cout<< "\x1b[34mnickname:\x1b[0m"<<this->nickname<<std::endl;
	std::cout<< "\x1b[34mlogin:\x1b[0m"<<this->login<<std::endl;
	std::cout<< "\x1b[34mpostal address:\x1b[0m"<<this->postal_address<<std::endl;
	std::cout<< "\x1b[34memail address:\x1b[0m"<<this->email_address<<std::endl;
	std::cout<< "\x1b[34mphone number:\x1b[0m"<<this->phone_number<<std::endl;
	std::cout<< "\x1b[34mbirthday date:\x1b[0m"<<this->birthday_date<<std::endl;
	std::cout<< "\x1b[34mfavorite meal:\x1b[0m"<<this->favorite_meal<<std::endl;
	std::cout<< "\x1b[34munderwear color:\x1b[0m"<<this->underwear_color<<std::endl;
	std::cout<< "\x1b[34mdarkest secret:\x1b[0m"<<this->darkest_secret<<std::endl;
}

void phonebook::print_contact()
{
	int i = 0;
	int j = 0;

	std::cout.setf(std::ios::right);
	std::cout<< "\x1b[36m|\x1b[36m";
	std::cout.width(10);
	std::cout<<this->id;
	std::cout<< "\x1b[36m|\x1b[36m";
	if(this->first_name.length() <= 10)
	{
		std::cout << std::setw(10);
		std::cout<<this->first_name;
	}
	else
	{
		while(i < 9 && this->first_name[i] != '\0')
			std::cout<<this->first_name[i++];
		if(first_name[i] != '\0')
			std::cout<<".";
	}
	i = 0;
	j = 0;
	std::cout<< "\x1b[36m|\x1b[36m";
	if(this->last_name.length() <= 10)
	{
		std::cout << std::setw(10);
		std::cout<<this->last_name;
	}
	else
	{
		while(i < 9 && this->last_name[i] != '\0')
			std::cout<<this->last_name[i++];
		if(last_name[i] != '\0')
			std::cout<<".";
	}
	i = 0;
	j = 0;
	std::cout<< "\x1b[36m|\x1b[36m";
	if(this->nickname.length() <= 10)
	{
		std::cout << std::setw(10);
		std::cout<<this->nickname;
	}
	else
	{
		while(i < 9 && this->nickname[i] != '\0')
			std::cout<<this->nickname[i++];
		if(this->nickname[i] != '\0')
			std::cout<<".";
	}
	std::cout<< "\x1b[36m|\x1b[36m"<<std::endl;
}