/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 12:34:18 by wintoo            #+#    #+#             */
/*   Updated: 2026/03/22 15:28:11 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook {
	private:
		Contact	contacts[8];
		int	next_id;
		int	total;
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void addContact(void);
		void searchContact(void) const;
};

#endif