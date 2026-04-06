/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wintoo <wintoo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:37:44 by wintoo            #+#    #+#             */
/*   Updated: 2026/04/05 15:55:56 by wintoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_rawBits = 0;
}

Fixed::Fixed(const int value)
{
	this->_rawBits = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	this->_rawBits = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->_rawBits = other._rawBits;
	return (*this);
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
	return this->_rawBits;
}

void Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->_rawBits / (1 << _fractionalBits);
}

int	Fixed::toInt(void) const
{
	return this->_rawBits >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return this->_rawBits > other._rawBits;
}

bool	Fixed::operator<(const Fixed &other) const
{
	return this->_rawBits < other._rawBits;
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return this->_rawBits >= other._rawBits;
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return this->_rawBits <= other._rawBits;
}

bool	Fixed::operator==(const Fixed &other) const
{
	return this->_rawBits == other._rawBits;
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return this->_rawBits != other._rawBits;
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed	result;
	result.setRawBits(this->_rawBits + other._rawBits);
	return result;
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed	result;
	result.setRawBits(this->_rawBits - other._rawBits);
	return result;
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed	result;
	long	temp;

	temp = (long)this->_rawBits * (long)other._rawBits;
	result.setRawBits((int)(temp >> _fractionalBits));
	return result;
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed	result;
	long	temp;

	if (other._rawBits == 0)
		return result;
	temp = ((long)this->_rawBits << _fractionalBits) / other._rawBits;
	result.setRawBits((int)temp);
	return result;
}

Fixed	&Fixed::operator++()
{
	this->_rawBits++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	saved(*this);
	this->_rawBits++;
	return saved;
}

Fixed	&Fixed::operator--()
{
	this->_rawBits--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	saved(*this);
	this->_rawBits--;
	return saved;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}
