/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:21:20 by clu               #+#    #+#             */
/*   Updated: 2025/08/27 15:54:48 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstring>
#include <iomanip>

// Define the Contact class
class Contact{
// Private member variables
private:
	std::string firstName, lastName, Nickname, phoneNumber, darkestSecret;

// Public member functions
// Functions declared here can be accessed from outside the class
public:
	Contact(); // Default constructor for the Contact class
	// Setters: functions to set the values of the member variables
	void setFirstName(const std::string &firstName);
	void setLastName(const std::string &lastName);
	void setNickname(const std::string &Nickname);
	void setPhoneNumber(const std::string &phoneNumber);
	void setDarkestSecret(const std::string &darkestSecret);

	// Getters: functions to retrieve the values of the member variables
	const std::string &getFirstName() const;
	const std::string &getLastName() const;
	const std::string &getNickname() const;
	const std::string &getPhoneNumber() const;
	const std::string &getDarkestSecret() const;
	bool isComplete() const;
};

#endif
