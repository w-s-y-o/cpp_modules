/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 13:27:39 by wintoo            #+#    #+#             */
/*   Updated: 2026/03/23 11:57:20 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook 	phonebook;
	std::string	command;

	while (true)
	{
		std::cout << "-- Contacts --" << std::endl
				  << "ADD    : save a new contact" << std::endl
				  << "SEARCH : display contacts and find" << std::endl
				  << "EXIT   : program quits and the contacts will be lost!" << std::endl
				  << "Enter command you would like to do: ";
		if (!std::getline(std::cin, command))
			break ;
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			break;
	}
	return (0);
}
