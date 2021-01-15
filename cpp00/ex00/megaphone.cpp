/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 13:33:17 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/01/04 15:28:42 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    print_str(char **argv)
{
    int     i;
    char    sym;
    int     j;

    i = 1;
    while(argv[i] != NULL)
    {
        j = 0;
        while(argv[i][j] != '\0')
        {
            if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
                sym = argv[i][j] - 32;
            else
                sym = argv[i][j];
            std::cout<< sym; 
            j++;
        }
        i++;
    }
    std::cout<<std::endl;
}

int     main(int argc, char **argv)
{
    if(argc > 1)
    {
       print_str(argv); 
    }
    else
    {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return (0);
}