/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 13:02:15 by wintoo            #+#    #+#             */
/*   Updated: 2026/03/28 15:21:37 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *heapZombie = newZombie("Heapy-Z");
	heapZombie->announce();
	
	randomChump("Stacky-Z");
	delete heapZombie;
	return (0);
}
