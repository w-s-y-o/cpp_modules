/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 12:47:43 by wintoo            #+#    #+#             */
/*   Updated: 2026/03/22 16:33:42 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNum;
		std::string	darkSecret;
	public:
		Contact(void);
		~Contact(void);
		void	setFirstName(const std::string &value);
		void	setLastName(const std::string &value);
		void	setNickname(const std::string &value);
		void	setPhoneNum(const std::string &value);
		void	setDarkSecret(const std::string &value);
		std::string	getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickname(void) const;
		std::string getPhoneNum(void) const;
		std::string getDarkSecret(void) const;
};

#endif
