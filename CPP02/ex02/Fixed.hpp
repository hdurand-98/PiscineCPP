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
	Fixed operator+(const Fixed &f);
	Fixed operator-(const Fixed &f);
	Fixed operator*(const Fixed &f);
	Fixed operator/(const Fixed &f);
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	static Fixed &min(Fixed &f1, Fixed &f2);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);

	float toFloat() const;
	int toInt() const;

	int getRawBits() const;
	void setRawBits(int const raw);

private:
	int value;
	static const int fracBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed &ref);
bool operator==(const Fixed &f1, const Fixed &f2);
bool operator!=(const Fixed &f1, const Fixed &f2);
bool operator>(const Fixed &f1, const Fixed &f2);
bool operator>=(const Fixed &f1, const Fixed &f2);
bool operator<(const Fixed &f1, const Fixed &f2);
bool operator<=(const Fixed &f1, const Fixed &f2);

#endif