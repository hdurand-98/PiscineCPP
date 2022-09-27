#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &ref)
{
	std::cout << "Copy constructor called\n";
	value = ref.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &ref)
{
	std::cout << "Assignment operator called\n";
	if (this == &ref)
		return (*this);
	value = ref.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}
