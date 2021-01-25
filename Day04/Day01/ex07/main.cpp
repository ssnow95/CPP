/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:25:58 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/19 10:13:17 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char *argv[])
{
	if(argc == 4)
	{
		std::string	s1;
		std::string s2;
		std::string	filename_input;
		std::string filename_output;
		std::string str;
		int pos;

		filename_input = argv[1];
		filename_output = filename_input + ".replace";
		s1 =  argv[2];
		s2 = argv[3];
		std::ifstream input(filename_input);
		 if (!input.is_open())
		{
			std::cout << "error" << std::endl;
			exit(1);
		}
		std::ofstream output(filename_output);
		if (!output)
		{
			std::cout << "error" << std::endl;
			input.close();
			exit(1);
		}
		while (getline(input, str))
		{
			pos = 0;
			while ((pos = str.find(s1, pos)) != -1)
			{
				str.replace(pos, s1.length(), s2);
				pos += s2.length();
			}
			output << str << std::endl;
		}
		input.close();
		output.close();
	}
	else
		std::cout << "incorect sum args" <<std::endl;
	return (0);
}