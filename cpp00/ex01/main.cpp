/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:00:05 by clu               #+#    #+#             */
/*   Updated: 2025/08/27 17:14:40 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static std::string trim(const std::string &str)
{
	size_t start = str.find_first_not_of(" \t\n\r\f\v");
	if (start == std::string::npos)
		return ("");
	size_t end = str.find_last_not_of(" \t\n\r\f\v");
	return (str.substr(start, end - start + 1));
}

static bool allDigits(const std::string &str)
{
	if (str.empty())
		return (false);
	for (size_t i = 0; i < str.size(); ++i)
	{
		if (!std::isdigit(static_cast<unsigned char>(str[i])))
			return (false);
	}
	return (true);
}

static bool getlineSafe(const std::string &prompt, std::string &out)
{
	std::cout << prompt;
	if (!std::getline(std::cin, out))
	{
		return (false); // EOF or error
	}
	out = trim(out);
	return (true);
}

static bool readNonEmptyLine(const std::string &prompt, std::string &out)
{
	while (true)
	{
		if (!getlineSafe(prompt, out))
			return (false);
		if (!out.empty())
			return (true);
		std::cout << "Field cannot be empty. Please try again.\n";
	}
}

static bool readPhoneNumber(std::string &phone)
{
	while (true)
	{
		if (!getlineSafe("Phone number: ", phone))
			return (false);
		if (!phone.empty() && allDigits(phone))
			return (true);
		std::cout << "Phone number must contain only digits. Please try again.\n";
	}
}

static void doAdd(PhoneBook &book)
{
	std::string first, last, nick, phone, secret;
	if (!readNonEmptyLine("First name: ", first))
		return;
	if (!readNonEmptyLine("Last name: ", last))
		return;
	if (!readNonEmptyLine("Nickname: ", nick))
		return;
	if (!readPhoneNumber(phone))
		return;
	if (!readNonEmptyLine("Darkest secret: ", secret))
		return;

	Contact c; // Create a Contact object
	c.setFirstName(first);
	c.setLastName(last);
	c.setNickname(nick);
	c.setPhoneNumber(phone);
	c.setDarkestSecret(secret);

	book.addContact(c);
	std::cout << "\nContact added successfully.\n\n";
}

static void doSearch(PhoneBook &book)
{
	if (book.getCount() == 0)
	{
		std::cout << "PhoneBook is empty. Use ADD first.\n\n";
		return;
	}

	book.listContacts();

	std::string idxStr;
	std::cout << "Enter index to view details (1-8), or press ENTER to cancel: ";
	if (!std::getline(std::cin, idxStr))
		return;

	idxStr = trim(idxStr);
	if (idxStr.empty())
	{
		std::cout << "(Cancelled)\n\n";
		return;
	}

	if (!allDigits(idxStr))
	{
		std::cout << "Invalid index.\n\n";
		return;
	}

	long idx = std::strtol(idxStr.c_str(), 0, 10);
	if (idx < 1 || idx > 8)
	{
		std::cout << "Index out of range.\n\n";
		return;
	}

	idx -= 1;
	if (book.getCount() < idx)
	{
		std::cout << "No contact stored at this index yet.\n\n";
		return;
	}

	book.showContacts(static_cast<int>(idx));
	std::cout << '\n';
}

int main()
{
	PhoneBook 	book;
	std::string cmd;

	std::cout << "Welcome to your awesome PhoneBook!\n";
	std::cout << "Commands: ADD, SEARCH, EXIT\n\n";

	while (true)
	{
		std::cout << "> ";
		if (!std::getline(std::cin, cmd))
		{
			std::cout << "\nEOF detected. Exiting.\n";
			break;
		}
		cmd = trim(cmd);
		for (size_t i = 0; i < cmd.size(); ++i)
			cmd[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(cmd[i])));
		if (cmd == "ADD")
			doAdd(book);
		else if (cmd == "SEARCH")
			doSearch(book);
		else if (cmd == "EXIT")
		{
			std::cout << "Goodbye!\n";
			break;
		}
		else if (!cmd.empty())
			std::cout << "Unknown command. Try: ADD, SEARCH, EXIT\n";
	}
	return 0;
}
