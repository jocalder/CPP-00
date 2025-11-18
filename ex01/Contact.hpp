/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:26:27 by jocalder          #+#    #+#             */
/*   Updated: 2025/11/18 17:09:31 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cctype>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		~Contact();
		void setName(const std::string &name);
		void setLast(const std::string &last);
		void setNick(const std::string &nick);
		void setPhone(const std::string &phone);
		void setDarkest(const std::string &darkest);

		std::string getName() const;
		std::string getLast() const;
		std::string getNick() const;
		std::string getPhone() const;
		std::string getDarkest() const;
};

#endif
