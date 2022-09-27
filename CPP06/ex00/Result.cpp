#include "Result.hpp"
#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

template <typename T>
bool isOverflowed(double nb)
{
	if (nb < std::numeric_limits<T>::min() || nb > std::numeric_limits<T>::max())
		return (true);
	else return (false);
}


Result::Result()
{
	
}

Result::Result(const Result &ref)
{
	*this = ref;
}

Result::~Result()
{

}

void Result::ToInt(double nb)
{
	if (isOverflowed<int>(nb) == false)
		i = static_cast<int>(nb);
	else
	{
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\n double: impossible\n";
		return;
	}
	FromInt();
}

void Result::ToChar(char nb)
{
	c = nb;
	FromChar();
}

void Result::ToFloat(double nb)
{
	if (isOverflowed<float>(nb) == false || isfinite(nb) == 0)
		f = static_cast<float>(nb);
	else
	{
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\n double: impossible\n";
		return;
	}
	FromFloat();
}

void Result::ToDouble(double nb)
{
	d = nb;
	FromDouble();
}

void Result::FromInt()
{
	/*** CAST CHAR ***/
	if (i < -128 || i > 127)
		std::cout << "char: impossible\n";
	else
	{
		c = static_cast<char>(i);
		if (isprint(c))
			std::cout << "char: \'" << c << "\'" << std::endl;
		else
			std::cout << "char: Non displayable\n";
	}

	std::cout << "int: " << i << std::endl;

	/*** CAST FLOAT ***/
	f = static_cast<float>(i);
	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f\n";	

	/*** CAST DOUBLE ***/
	d = static_cast<double>(i);
	std::cout << "double: " << d << std::endl;
}

void Result::FromChar()
{
	if (isprint(c))
		std::cout << "char: \'" << c << "\'" << std::endl;
	else
		std::cout << "char: Non displayable\n";
	
	/*** CAST INT ***/
	i = static_cast<int>(c);
	std::cout << "int: " << i << std::endl;

	/*** CAST FLOAT ***/
	f = static_cast<float>(c);
	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f\n";	

	/*** CAST DOUBLE ***/
	d = static_cast<double>(c);
	std::cout << "double: " << d << std::endl;
}

void Result::FromFloat()
{
	/*** CAST CHAR ***/
	if (f < -128 || f > 127 || isnan(f) == 1)
		std::cout << "char: impossible\n";
	else
	{
		c = static_cast<char>(f);
		if (isprint(c))
			std::cout << "char: \'" << c << "\'" << std::endl;
		else
			std::cout << "char: Non displayable\n";
	}

	/*** CAST INT ***/
	if (isOverflowed<int>(f) == false && isnan(f) == 0)
	{
		i = static_cast<int>(f);
		std::cout << "int: " << i << std::endl;
	}
	else
		std::cout << "int : impossible\n";

	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f\n";	

	/*** CAST DOUBLE ***/
	d = static_cast<double>(f);
	std::cout << "double: " << d << std::endl;
}

void Result::FromDouble()
{ 
	/*** CAST CHAR ***/
	if (d < -128 || d > 127 || isnan(d) == 1)
		std::cout << "char: impossible\n";
	else
	{
		c = static_cast<char>(d);
		if (isprint(c))
			std::cout << "char: \'" << c << "\'" << std::endl;
		else
			std::cout << "char: Non displayable\n";
	}

	/*** CAST INT ***/
	if (isOverflowed<int>(d) == false && isnan(d) == 0)
	{
		i = static_cast<int>(d);
		std::cout << "int: " << i << std::endl;
	}
	else
		std::cout << "int : impossible\n";

	/*** CAST FLOAT ***/
	if (isOverflowed<float>(d) == false || isfinite(d) == 0)
	{
		f = static_cast<float>(d);
		std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f\n";	
	}
	else std::cout << "float : impossible\n";

	std::cout << "double: " << d << std::endl;
}

Result& Result::operator=(const Result &ref)
{
	i = ref.i;
	c = ref.c;
	f = ref.f;
	d = ref.d;
	return (*this);
}