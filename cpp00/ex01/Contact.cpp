/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:21:13 by clu               #+#    #+#             */
/*   Updated: 2025/08/27 16:10:29 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Default constructor
Contact::Contact()
{
	// std::cout << "Contact constructer called!" << std::endl;
}

// Setters
void Contact::setFirstName(const std::string &firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(const std::string &lastName)
{
	this->lastName = lastName;
}

void Contact::setNickname(const std::string &Nickname)
{
	this->Nickname = Nickname;
}

void Contact::setPhoneNumber(const std::string &phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

// Getters
const std::string &Contact::getFirstName() const
{
	return (this->firstName);
}

const std::string &Contact::getLastName() const
{
	return (this->lastName);
}

const std::string &Contact::getNickname() const
{
	return (this->Nickname);
}

const std::string &Contact::getPhoneNumber() const
{
	return (this->phoneNumber);
}

const std::string &Contact::getDarkestSecret() const
{
	return (this->darkestSecret);
}

// Helper: all fields must not be empty
bool Contact::isComplete() const
{
	return (!this->firstName.empty()
		 && !this->firstName.empty()
		 &&	!this->firstName.empty()
		 &&	!this->firstName.empty()
		 &&	!this->firstName.empty());
}
