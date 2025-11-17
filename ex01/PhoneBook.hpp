/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:43:16 by jocalder          #+#    #+#             */
/*   Updated: 2025/11/17 17:37:24 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact array[8];
        int     oldest;
        int     contacts;
    public:
        PhoneBook();
        ~PhoneBook();
        void add();
        void search();
};

#endif