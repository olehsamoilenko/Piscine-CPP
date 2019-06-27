/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 13:28:28 by osamoile          #+#    #+#             */
/*   Updated: 2019/06/20 13:28:30 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fractBits = 8;

Fixed::Fixed(void) : _rawBits(0)
{

}

Fixed::~Fixed(void)
{

}

Fixed & Fixed::operator=(Fixed const & src)
{
	if (this != &src)
		_rawBits = src.getRawBits();
	return (*this);
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

int Fixed::getRawBits(void) const
{
	return (_rawBits);
}

void Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}

Fixed::Fixed(const int n)
{
	_rawBits = n << _fractBits;
}

Fixed::Fixed(const float f)
{
	_rawBits = roundf(f * (1 << _fractBits));
}

float Fixed::toFloat(void) const
{
	return ((float)_rawBits / (1 << _fractBits));
}

int Fixed::toInt(void) const
{
	return (_rawBits >> _fractBits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}

Fixed Fixed::operator+(Fixed const & src) const
{
	return (Fixed(toFloat() + src.toFloat()));
}

Fixed Fixed::operator-(Fixed const & src) const
{
	return (Fixed(toFloat() - src.toFloat()));
}

Fixed Fixed::operator*(Fixed const & src) const
{
	return (Fixed(toFloat() * src.toFloat()));
}

Fixed Fixed::operator/(Fixed const & src) const
{
	return (Fixed(toFloat() / src.toFloat()));
}

Fixed & Fixed::operator++(void)
{
	_rawBits++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_rawBits++;
	return tmp;
}

Fixed & Fixed::operator--(void)
{
	_rawBits--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_rawBits--;
	return tmp;
}

bool Fixed::operator>(Fixed const & src) const { return (_rawBits > src._rawBits); }
bool Fixed::operator<(Fixed const & src) const { return (_rawBits < src._rawBits); }
bool Fixed::operator>=(Fixed const & src) const { return (_rawBits >= src._rawBits); }
bool Fixed::operator<=(Fixed const & src) const { return (_rawBits <= src._rawBits); }
bool Fixed::operator==(Fixed const & src) const { return (_rawBits == src._rawBits); }
bool Fixed::operator!=(Fixed const & src) const { return (_rawBits != src._rawBits); }

Fixed & Fixed::max(Fixed & val1, Fixed & val2)
{
	return (val1 > val2 ? val1 : val2);
}

const Fixed & Fixed::max(Fixed const & val1, Fixed const & val2)
{
	return (val1 > val2 ? val1 : val2);
}

Fixed & Fixed::min(Fixed & val1, Fixed & val2)
{
	return (val1 < val2 ? val1 : val2);
}

const Fixed & Fixed::min(Fixed const & val1, Fixed const & val2)
{
	return (val1 < val2 ? val1 : val2);
}