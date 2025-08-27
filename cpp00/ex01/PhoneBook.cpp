/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:23:22 by clu               #+#    #+#             */
/*   Updated: 2025/08/27 17:13:33 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Helper function to truncate the width with a trailing '.'
static std::string trim10(const std::string &s)
{
	if (s.length() > 10)
		return (s.substr(0, 9) + ".");
	return (s);
}

// Constructor
PhoneBook::PhoneBook() : count(0), oldest(0) // member initializer list
{
	// std::cout << "Phonebook constructer called!" << std::endl;
}

void PhoneBook::addContact(const Contact& contact)
{
	if (!contact.isComplete())
	{
		std::cout << "Contact not saved: all fields must be non-empty.\n";
		return;
	} 

	int index;
	index = (count <= 8) ? count : oldest;
	if (count <= 8)
		++count;
	else
		oldest = (oldest + 1) % 8;

	contacts[index] = contact;

	std::cout << "Contact saved at index " << index + 1
			<< (count == 9 ? " (overwrote oldest)\n" : "\n");
}

void PhoneBook::listContacts() const
{
	if (count == 0)
	{
		std::cout << "PhoneBook is empty. Use ADD to create a contact.\n";
		return;
	}

	std::cout << "|" << std::setw(10) << "Index"
			  << "|" << std::setw(10) << "First Name"
			  << "|" << std::setw(10) << "Last Name"
			  << "|" << std::setw(10) << "Nickname"
			  << "|\n";

	for (int i = 0; i < count; ++i)
	{
		std::cout << "|" << std::setw(10) << (i + 1) // Start index from 1
				  << "|" << std::setw(10) << trim10(contacts[i].getFirstName())
				  << "|" << std::setw(10) << trim10(contacts[i].getLastName())
				  << "|" << std::setw(10) << trim10(contacts[i].getNickname())
				  << "|\n";
	}
}

void PhoneBook::showContacts(int index) const
{
	if (index < 0 || index >= count)
	{
		std::cout << "Invalid index.\n";
		return ;
	}

	const Contact &c = contacts[index];
	std::cout << "First Name	  : " << c.getFirstName() << "\n"
			  << "Last Name	  : " << c.getLastName() << "\n"
			  << "Nickname	  : " << c.getNickname() << "\n"
			  << "Phone Number  : " << c.getPhoneNumber() << "\n"
			  << "Darkest Secret: " << c.getDarkestSecret() << "\n";
}

int PhoneBook::getCount() const
{
	return (count);
}
