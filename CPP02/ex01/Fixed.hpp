#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(int value);
	Fixed(float value);
	~Fixed();
	Fixed(const Fixed &ref);
	Fixed &operator=(const Fixed &ref);

	float toFloat() const;
	int toInt() const;

	int getRawBits() const;
	void setRawBits(int const raw);

private:
	int value;
	static const int fracBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed &ref);

#endif