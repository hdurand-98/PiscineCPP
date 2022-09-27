#include "Result.hpp"
#include <cmath>
#include <limits>

bool isSignedDigit(char c)
{
	if (isdigit(c) || c == '+' || c == '-')
		return (true);
	else
		return (false);
}

bool SpecialValues(std::string str, Result& R)
{
	if (str.compare("nan") == 0)
		R.ToDouble(std::numeric_limits<double>::quiet_NaN());
	else if (str.compare("nanf") == 0)
		R.ToFloat(std::numeric_limits<float>::quiet_NaN());
	else if (str.compare("+inf") == 0)
		R.ToDouble(std::numeric_limits<double>::infinity());
	else if (str.compare("-inf") == 0)
		R.ToDouble(-std::numeric_limits<double>::infinity());
	else if (str.compare("+inff") == 0)
		R.ToFloat(1.0/0.0);
	else if (str.compare("-inff") == 0)
		R.ToFloat(-1.0/0.0);
	else
		return (false);
	return (true);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments\n";
		return (0);
	}

	Result R;
	std::string str = av[1];

	if (SpecialValues(str, R) == 1)
		return (0);

	int i = 0;
	while (str[i] && isSignedDigit(str[i])) //going through all signs and numbers
		i++;
	if (!str[i]) //if nothing else is encountered, that's an int
		R.ToInt(std::strtod(str.c_str(), NULL));
	else
	{
		if (str.length() == 1 && isprint(str[0])) //if str is only 1 byte and that byte is printable then it's a char
		{
			R.ToChar(str[0]);
			return (0);
		}
		if (str[i++] != '.') //if what stopped the iteration isn't a point that means it isn't a floating point, then it's unknown
		{
			std::cout << "Impossible conversion, unknown type\n";
			return (0);
		}
		while (str[i] && std::isdigit(str[i]))
			i++;
		if (!str[i])
			R.ToDouble(std::strtod(str.c_str(), NULL));
		else if (str[i] == 'f')
			R.ToFloat(std::strtod(str.c_str(), NULL));
		else
			std::cout << "Impossible conversion, unknown type\n";
	}
	return (0);
}