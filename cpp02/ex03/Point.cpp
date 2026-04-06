/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 16:29:19 by wintoo            #+#    #+#             */
/*   Updated: 2026/04/05 17:13:37 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{	
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(const Point &other) : x(other.x), y(other.y)
{
}

Point &Point::operator=(const Point &other)
{
	(void)other;
	return *this;
}

Point::~Point()
{
}

Fixed Point::getX() const
{
	return this->x;
}

Fixed Point::getY() const
{
	return this->y;
}
