/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clu <clu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:39:01 by clu               #+#    #+#             */
/*   Updated: 2025/09/05 17:21:03 by clu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

///////////////////////////////////////////////////////////////////////
// Constructors, copy constructor, copy assignment operator, destructor
Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_value = other.getValue();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int intValue)
{
	std::cout << "Int constructor called" << std::endl;
	_value = intValue << _fractionalBits;
}

Fixed::Fixed(const float floatValue)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(floatValue * (1 << _fractionalBits));
}

///////////////////////////////////////////////////////////////////////
// Member functions
float Fixed::toFloat() const
{
	return ((float)_value / (1 << _fractionalBits));
}

int Fixed::toInt() const
{
	return (_value >> _fractionalBits);
}

int Fixed::getValue() const
{
	return (_value);
}

void Fixed::setvalue(int const raw)
{
	_value = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}


///////////////////////////////////////////////////////////////////////
// Ex02 member functions
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b ? a : b);
}

///////////////////////////////////////////////////////////////////////
// Ex02 operator overloads
bool Fixed::operator>(const Fixed& other) const
{
	return (_value > other._value);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (_value < other._value);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (_value >= other._value);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (_value <= other._value);
}

bool Fixed::operator==(const Fixed& other) const
{
	return (_value == other._value);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (_value != other._value);
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed& Fixed::operator++(void)
{
	_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	_value++;
	return (temp);
}

Fixed& Fixed::operator--(void)
{
	_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	_value--;
	return (temp);
}

