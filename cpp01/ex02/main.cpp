/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 13:02:15 by wintoo            #+#    #+#             */
/*   Updated: 2026/03/28 16:07:22 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of the string     : " << &str << std::endl;
	std::cout << "Memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF : " << &stringREF << std::endl;

	std::cout << "Value of the string              : " << str << std::endl;
	std::cout << "Value pointed to by stringPTR    : " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF    : " << stringREF << std::endl;

	return (0);
}
