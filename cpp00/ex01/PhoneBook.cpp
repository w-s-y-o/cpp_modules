/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 13:25:00 by wintoo            #+#    #+#             */
/*   Updated: 2026/03/23 11:58:58 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <cctype>

PhoneBook::PhoneBook(void){
	next_id = 0;
	total = 0;
}

PhoneBook::~PhoneBook(void){
}

static int	readValues(const std::string &prompt, std::string &value)
{
	while (true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, value))
			return (0);
		if (!value.empty())
			return (1);
		std::cout << "Input cannot be empty." << std::endl;
	}
}

void	PhoneBook::addContact(void)
{
	Contact		contact;
	std::string	input;

	if (!readValues("First Name: ", input))
		return ;
	contact.setFirstName(input);
	if (!readValues("Last Name: ", input))
		return ;
	contact.setLastName(input);
	if (!readValues("Nickname: ", input))
		return ;
	contact.setNickname(input);
	if (!readValues("Phone Number: ", input))
		return ;
	contact.setPhoneNum(input);
	if (!readValues("Dark Secret!!: ", input))
		return ;
	contact.setDarkSecret(input);
	contacts[next_id] = contact;
	next_id = (next_id + 1) % 8;
	if (total < 8)
		total++;
	std::cout << "***************************" << std::endl;
	std::cout << "Contact successfully saved." << std::endl;
	std::cout << "***************************" << std::endl;
}

static std::string	formatField(const std::string &value)
{
	if (value.length() > 10)
		return (value.substr(0, 9) + ".");
	return (value);
}

static int	isValidIndex(const std::string &input, int total)
{
	if (input.length() != 1)
		return (0);
	if (!std::isdigit(static_cast<unsigned char>(input[0])))
		return (0);
	if ((input[0] - '0') < 0 || (input[0] - '0') >= total)
		return (0);
	return (1);
}

void	PhoneBook::searchContact(void) const
{
	std::string	input;
	int			index;

	if (total == 0)
	{
		std::cout << "There is no contact currently." << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	for (int i = 0; i < total; i++)
	{
		std::cout << std::setw(10) << i << "|"
			<< std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
			<< std::setw(10) << formatField(contacts[i].getLastName()) << "|"
			<< std::setw(10) << formatField(contacts[i].getNickname()) << std::endl;
	}
	std::cout << "Enter index to search: ";
	if (!std::getline(std::cin, input))
		return ;
	if (!isValidIndex(input, total))
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	index = input[0] - '0';
	std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].getPhoneNum() << std::endl;
	std::cout << "Dark Secret: " << contacts[index].getDarkSecret() << std::endl;
}
