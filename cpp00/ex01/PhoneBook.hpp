/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:23:53 by clu               #+#    #+#             */
/*   Updated: 2025/08/28 14:22:04 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook
{
private:
	Contact contacts[8];
	int	count;
	int	oldest;

public:
	PhoneBook();
	void addContact(const Contact& contact);
	void listContacts() const;
	void showContacts(int index) const;
	int getCount() const;
};

#endif
