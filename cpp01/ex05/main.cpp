/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 13:22:10 by wintoo            #+#    #+#             */
/*   Updated: 2026/03/30 14:11:38 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;
	std::cout << "Debug:" << std::endl;
	harl.complain("DEBUG");

	std::cout << std::endl << "Info:" << std::endl;
	harl.complain("INFO");

	std::cout << std::endl << "Warning:" << std::endl;
    harl.complain("WARNING");

	std::cout << std::endl << "Error:" << std::endl;
    harl.complain("ERROR");
	return (0);
}
