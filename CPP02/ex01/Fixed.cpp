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
