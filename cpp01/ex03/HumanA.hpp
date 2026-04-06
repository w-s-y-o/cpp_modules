/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:12:03 by wintoo            #+#    #+#             */
/*   Updated: 2026/03/30 12:27:06 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon&		_weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void	attack() const;
};

#endif