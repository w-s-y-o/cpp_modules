/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 13:02:07 by wintoo            #+#    #+#             */
/*   Updated: 2026/03/28 15:38:30 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie()
{
	std::cout << _name << " is destroyed." << std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie* horde;
	int		i;

	if (N <= 0)
		return (NULL);
	horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		horde[i].setName(name);
		horde[i].announce();
		i++;
	}
	return (horde);
}
