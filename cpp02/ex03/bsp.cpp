/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 16:29:51 by wintoo            #+#    #+#             */
/*   Updated: 2026/04/06 15:41:20 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(Point const a, Point const b, Point const c)
{
	Fixed area = (a.getX() * (b.getY() - c.getY()) +
				  b.getX() * (c.getY() - a.getY()) + 
				  c.getX() * (a.getY() - b.getY()));
	if (area < Fixed(0))
		return (Fixed(0) - area);
	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	abc = area(a, b, c);
	Fixed	pab = area(point, a, b);
	Fixed	pbc = area(point, b, c);
	Fixed	pca = area(point, c, a);

	if (pab == Fixed(0) || pbc == Fixed(0) || pca == Fixed(0))
		return false;
	return (abc == pab + pbc + pca);
}
