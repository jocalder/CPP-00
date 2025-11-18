/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:17:30 by jocalder          #+#    #+#             */
/*   Updated: 2025/11/18 16:10:41 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string	line;

	while (1)
	{
		std::cout << "Enter type <ADD> <SEARCH> or <EXIT>" << std::endl;
		std::getline(std::cin, line);
		if (std::cin.eof())
			return (1);
		if (line.compare("ADD") == 0)
			phonebook.add();
		if (line.compare("SEARCH") == 0)
			phonebook.search();
		if (line.compare("EXIT") == 0)
			break ;
	}
	return (0);
}