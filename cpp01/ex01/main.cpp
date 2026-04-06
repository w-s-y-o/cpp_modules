/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 13:02:15 by wintoo            #+#    #+#             */
/*   Updated: 2026/03/28 15:40:17 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* horde;

	horde = zombieHorde(7, "Horde-Z");
	if (!horde)
		return (1);
	delete[] horde;
	return (0);
}
