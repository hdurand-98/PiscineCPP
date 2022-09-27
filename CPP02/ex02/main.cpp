#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << "avant increment " << a << std::endl;
	std::cout << "pre increment " << ++a << std::endl;
	std::cout << "apres pre increment " << a << std::endl;
	std::cout << "post increment " << a++ << std::endl;
	std::cout << "apres post increment " << a << std::endl;
	std::cout << "resultat multiplication 5.05 * 2 = " << b << std::endl;
	std::cout << "max entre 0.0078125 et 10.1016 " << Fixed::max(a, b) << std::endl;
	std::cout << "min entre 0.0078125 et 10.1016 " << Fixed::min(a, b) << std::endl;
	std::cout << "avant decrement " << a << std::endl;
	std::cout << "pre decrement " << --a << std::endl;
	std::cout << "apres pre decrement " << a << std::endl;
	std::cout << "post decrement " << a-- << std::endl;
	std::cout << "apres post decrement " << a << std::endl;
	if (a <= b)
		std::cout << "affiché si 0 <= 10.16\n";
	if (a < b)
		std::cout << "affiché si 0 < 10.16\n";
	if (b >= a)
		std::cout << "affiché si 10.16 >= 0\n";
	if (b > a)
		std::cout << "affiché si 10.16 > 0\n";
	if (a != b)
		std::cout << "affiché si 10.16 != 0\n";
	Fixed c(a);
	if (a == c)
		std::cout << "affiché si 0 == 0\n";
	Fixed d(Fixed(1) / Fixed(0.5f));
	std::cout << "resultat de 1 / 0.5 = " << d << std::endl;
	Fixed e(Fixed(2) + Fixed(5.57f));
	std::cout << "resultat de 2 + 5.57 = " << e << std::endl;
	Fixed f(Fixed(30.35f) - Fixed(19.6548f));
	std::cout << "resultat de 30.35 - 19.6548 = " << f << std::endl;

	return 0;
}
