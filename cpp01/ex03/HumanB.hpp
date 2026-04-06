/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:12:04 by wintoo            #+#    #+#             */
/*   Updated: 2026/03/30 12:26:54 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon*		_weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon& weapon);
		void	attack() const;
};

#endif