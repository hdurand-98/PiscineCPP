#ifndef FIXED_H
#define FIXED_H

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &ref);
	Fixed &operator=(const Fixed &ref);

	int getRawBits() const;
	void setRawBits(int const raw);

private:
	int value;
	static const int fracBits = 8;
};

#endif