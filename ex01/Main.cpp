/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:17:30 by jocalder          #+#    #+#             */
/*   Updated: 2026/01/28 12:52:35 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string	line;

	while (1)
	{
		if (std::cin.eof())
			return (1);
		std::cout << "Enter type <ADD> <SEARCH> or <EXIT>" << std::endl;
		std::getline(std::cin, line);
		if (line.compare("ADD") == 0)
			phonebook.add();
		if (line.compare("SEARCH") == 0)
			phonebook.search();
		if (line.compare("EXIT") == 0)
			break ;
	}
	return (0);
}