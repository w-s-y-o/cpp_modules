/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 13:02:08 by wintoo            #+#    #+#             */
/*   Updated: 2026/03/28 15:30:14 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string name); 
};

Zombie*	zombieHorde(int N, std::string name);

#endif