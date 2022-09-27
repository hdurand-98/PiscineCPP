#include "Fixed.hpp"
#include <iostream>
#include <math.h>
#include <cmath>
#include <bitset>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	value = 0;
}

Fixed::Fixed(float val)
{
	std::cout << "Float constructor called\n";
	value = roundf(val * (1 << fracBits));
}

Fixed::Fixed(int value)
{
	std::cout << "Int constructor called\n";
	this->value = value * (1 << fracBits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &ref)
{
	std::cout << "Copy constructor called\n";
	*this = ref;
}

Fixed& Fixed::operator=(const Fixed &ref)
{
	std::cout << "Assignation operator called\n";
	if (this == &ref)
		return (*this);
	value = ref.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed &ref)
{
	os << ref.toFloat();
	return os;
}

bool operator==(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() !=  f2.toFloat())
		return (0);
	else
		return (1);
}

bool operator!=(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() ==  f2.toFloat())
		return (0);
	else
		return (1);
}

bool operator>(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() <= f2.toFloat())
		return (0);
	else
		return (1);
}

bool operator>=(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() <  f2.toFloat())
		return (0);
	else
		return (1);
}

bool operator<(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() >=  f2.toFloat())
		return (0);
	else
		return (1);
}

bool operator<=(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (0);
	else
		return (1);
}

Fixed Fixed::operator+(const Fixed &f)
{
	float result = this->toFloat() + f.toFloat();
	
	return (Fixed(result));
}

Fixed Fixed::operator-(const Fixed &f)
{
	float result = this->toFloat() - f.toFloat();
	return (Fixed(result));
}

Fixed Fixed::operator*(const Fixed &f)
{
	float result = this->toFloat() * f.toFloat();
	
	return (Fixed(result));
}

Fixed Fixed::operator/(const Fixed &f)
{
	float result = this->toFloat() / f.toFloat();
	
	return (Fixed(result));
}

Fixed& Fixed::operator++()
{
	value = roundf((this->toFloat() + (float)1 / 256) * pow(2, fracBits));
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	float tmpvalue = (*this).toFloat() + (float)1 / 256;
	(*this).value = roundf(tmpvalue * pow(2, (*this).fracBits));
	return (tmp);
}

Fixed& Fixed::operator--()
{
	value = roundf((this->toFloat() - (float)1/256) * pow(2, fracBits));
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	float tmpvalue = (*this).toFloat() - (float)1 / 256;
	(*this).value = roundf(tmpvalue * pow(2, (*this).fracBits));
	return (tmp);
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f2);
	else
		return (f1);
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f2);
	else
		return (f1);
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() >= f2.toFloat())
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() >= f2.toFloat())
		return (f1);
	else
		return (f2);
}

float Fixed::toFloat() const
{
	return ((float)(value) / (1 << fracBits));
}

int Fixed::toInt() const
{
	return (value / (1 << fracBits));
}

int Fixed::getRawBits() const
{
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}
