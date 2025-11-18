/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:00:17 by jocalder          #+#    #+#             */
/*   Updated: 2025/11/18 18:00:43 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): oldest(0), contacts(0) {}
PhoneBook::~PhoneBook() {}

void    PhoneBook::add()
{
    Contact new_contact;

    std::string input;
    std::cout << "Enter first name: \n";
    std::getline(std::cin, input);
    new_contact.setName(input);
    if (input.empty())
    {
    	std::cout << "Please insert a valid argument\n";
		return ;
	}
	std::cout << "Enter last name: \n";
    std::getline(std::cin, input);
    new_contact.setLast(input);
    if (input.empty())
    {
    	std::cout << "Please insert a valid argument\n";
		return ;
	}
	std::cout << "Enter nick name: \n";
    std::getline(std::cin, input);
    new_contact.setNick(input);
    if (input.empty())
    {
    	std::cout << "Please insert a valid argument\n";
		return ;
	}
	std::cout << "Enter phone number: \n";
    std::getline(std::cin, input);
    new_contact.setPhone(input);
    if (input.empty())
    {
    	std::cout << "Please insert a valid argument";
		return ;
	}
	std::cout << "Enter darkest secret: \n";
    std::getline(std::cin, input);
    new_contact.setDarkest(input);
    if (input.empty())
    {
    	std::cout << "Please insert a valid argument";
		return ;
	}

	int	current;
	if (contacts < 8)
	{
		current = contacts;
		contacts++;
	}
	else
	{
		current = oldest;
		oldest = (oldest + 1) % 8;
	}
	array[current] = new_contact;
}

void	PhoneBook::search()
{
	std::string	input;
	std::cout << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < contacts; i++)
	{
		std::string name = array[i].getName();
		if (name.length() > 10)
			name = name.substr(0, 9) + ".";
		std::string last = array[i].getLast();
		if (last.length() > 10)
			last = last.substr(0, 9) + ".";
		std::string nick = array[i].getNick();
		if (nick.length() > 10)
			nick = nick.substr(0, 9) + ".";
		std::cout << std::setw(10) << i << "|"
				<< std::setw(10) << name << "|"
				<< std::setw(10) << last << "|"
				<< std::setw(10) << nick << std::endl;		
	}
	
	int	index = -1;
	std::cout << "Select index" << std::endl;
	std::getline(std::cin, input);
	index = std::atoi(input.c_str());
	if (index < 0 | index >= contacts)
	{
		std::cout << "Please enter a valid index" << std::endl;
		return ;
	}
	std::cout << "First name: " << array[index].getName() << std::endl;
	std::cout << "Last name: " << array[index].getLast() << std::endl;
	std::cout << "Nick name: " << array[index].getNick() << std::endl;
	std::cout << "Phone number:" << array[index].getPhone() << std::endl;
	std::cout << "Darkest secret: " << array[index].getDarkest() << std::endl;
	std::cout << std::endl;
}
