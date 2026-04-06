/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:37:31 by wintoo            #+#    #+#             */
/*   Updated: 2026/04/05 17:41:50 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point p(2, 2);
	Point p2(0, 0);
    Point p3(5, 0);
    Point p4(10, 10);

    std::cout << "Is the point inside the triangle? "
			  << (bsp(a, b, c, p)? "true" : "false") << std::endl;
	return (0);
}
