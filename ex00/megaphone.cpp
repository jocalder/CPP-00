/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:22:50 by jocalder          #+#    #+#             */
/*   Updated: 2025/11/17 13:32:55 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
	int	j = 0;
	int	i = -1;
    if (argc == 1)
    	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
    	while (argv[++j] && j <= argc)
        {
        	i = -1;
        	while (argv[j][++i])
            	std::cout << (char)std::toupper((unsigned char)argv[j][i]);
        }
    }
    std::cout << std::endl;
    return (0);
}