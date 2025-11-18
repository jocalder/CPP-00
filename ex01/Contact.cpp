/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:26:10 by jocalder          #+#    #+#             */
/*   Updated: 2025/11/18 17:09:35 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {};
Contact::~Contact() {};

void    Contact::setName(const std::string &name)
{
    first_name = name;
}
void    Contact::setLast(const std::string &last)
{
    last_name = last;
}
void    Contact::setNick(const std::string &nick)
{
    nick_name = nick;
}
void    Contact::setPhone(const std::string &phone)
{
    phone_number = phone;
}
void    Contact::setDarkest(const std::string &darkest)
{
    darkest_secret = darkest;
}

std::string Contact::getName() const
{
    return (first_name);
}

std::string Contact::getLast() const
{
    return (last_name);
}

std::string Contact::getNick() const
{
    return (nick_name);
}

std::string Contact::getPhone() const
{
    return (phone_number);
}

std::string Contact::getDarkest() const
{
    return (darkest_secret);
}