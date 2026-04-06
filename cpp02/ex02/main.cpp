/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:37:31 by wintoo            #+#    #+#             */
/*   Updated: 2026/04/06 15:38:51 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a + 1 << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << "Normal Object:" << std::endl;
	Fixed c(10);
    Fixed d(20);

	// this(&) not make a new object, it references/copy the return variable
	// try delete "&" to see different.
    Fixed &m = Fixed::min(c, d);

    std::cout << "before: " << c << " " << d << " " << m << std::endl;
    m.setRawBits(9999);
    std::cout << "after: " << c << " " << d << " " << m << std::endl;

	std::cout << std::endl << "const Object:" << std::endl;
	const Fixed c1(10);
    const Fixed c2(20);
    const Fixed &m2 = Fixed::min(c1, c2);
    std::cout << "min is: " << m2 << std::endl;
	// m2.setRawBits(9999);

	return (0);
}
