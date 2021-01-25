/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 17:00:28 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/06 12:12:35 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int                             main(int argc, char **argv)
{
        int             i;
		int				max_id;
		int				flag;
		int				search;
        std::string     command;
        phonebook       phonebook[9];
        
        i = 1;
		search = 0;
		max_id = -1;
		flag = 0;
        while(1)
        {
				std::cout<< "\x1b[32menter(ADD,SEARCH or EXIT):\x1b[0m";
               	getline(std::cin, command);
               if(command == "ADD")
               {
                       if(i > 8)
                             std::cout<< "\x1b[31mphonebook has 8 contacts\x1b[0m"<< std::endl;
                        else
                        {
                                phonebook[i - 1].add_contact(i);
								if((phonebook[i - 1].check_contact()) == 1)
								{
									max_id = i;
									i++;	
								}
								else
									std::cout<< "\x1b[31minfo is empty\x1b[0m"<< std::endl;
								 
                        }
						std::cin.clear();
               }
               else if(command == "SEARCH")
               {
				   i = 1;
				   if(max_id <= 0)
						std::cout<< "\x1b[31mcontact's list is empty\x1b[0m"<< std::endl;
					else
					{
						std::cout << "\x1b[36m|-------------------------------------------|\x1b[36m" << std::endl;
						std::cout << "\x1b[36m|     Index|First Name| Last Name|  Nickname|\x1b[36m" << std::endl;
						std::cout << "\x1b[36m|-------------------------------------------|\x1b[36m" << std::endl;
						while(i <= max_id)
						{
							phonebook[i - 1].print_contact();
							i++;
						}
						std::cout<< "\x1b[32menter contact's id:\x1b[0m"<< std::endl;
						std::cin>>search;
						if(std::cin.eof())
							exit(0);
						while(std::cin.fail())
						{
							std::cin.clear();
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout<< "\x1b[32menter contact's id:\x1b[0m"<< std::endl;
							std::cin>>search;
						}
						if(search > 0)
						{
							std::cout<< "\x1b[32menter contact's id:\x1b[0m"<< std::endl;
							if(search > max_id)
								std::cout<< "\x1b[31mcontact does not exist\x1b[0m"<< std::endl;
							else
							{
								i = 1;
								while(phonebook[i - 1].id != search && i <= max_id)
									i++;
								if(i == search)
									phonebook[i - 1].search_contact();
								else
									std::cout<< "\x1b[31mcontact not found\x1b[0m"<< std::endl;
							}
						}
						else
							std::cout<< "\x1b[31mincorrect id\x1b[0m"<< std::endl;
						std::cin.clear();
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					}           
               }
               else if(command == "EXIT")
                       exit(0);

			   else if(std::cin.eof())
				   exit(0);
                else
               {
                       std::cout<< "\x1b[31mincorrect command\x1b[0m"<< std::endl;
                       std::cout<< "\x1b[31menter ADD or SEARCH or EXIT, please\x1b[0m"<< std::endl;
               }
        }
        return (0);
}