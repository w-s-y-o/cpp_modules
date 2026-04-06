/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 13:25:57 by wintoo            #+#    #+#             */
/*   Updated: 2026/03/22 17:37:02 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
}

Contact::~Contact(void){
}

void	Contact::setFirstName(const std::string &value)
{
	firstName = value;
}

void	Contact::setLastName(const std::string &value)
{
	lastName = value;
}

void	Contact::setNickname(const std::string &value)
{
	nickname = value;
}

void	Contact::setPhoneNum(const std::string &value)
{
	phoneNum = value;
}

void	Contact::setDarkSecret(const std::string &value)
{
	darkSecret = value;
}

std::string	Contact::getFirstName(void) const
{
	return	(firstName);
}

std::string	Contact::getLastName(void) const
{
	return	(lastName);
}

std::string	Contact::getNickname(void) const
{
	return	(nickname);
}

std::string	Contact::getPhoneNum(void) const
{
	return	(phoneNum);
}

std::string	Contact::getDarkSecret(void) const
{
	return	(darkSecret);
}
