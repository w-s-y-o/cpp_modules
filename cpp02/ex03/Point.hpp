/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 16:29:30 by wintoo            #+#    #+#             */
/*   Updated: 2026/04/05 17:07:38 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	x;
		const Fixed	y;
	public:
	Point();
	Point(const float x, const float y);
	Point(const Point &other);
	Point &operator=(const Point &other);
	~Point();

	Fixed getX() const;
	Fixed getY() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif