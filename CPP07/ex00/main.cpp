#include "whatever.hpp"
#include <iostream>
#include <string>

int main()
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "\nc = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	bool t = true;
	bool f = false;
	std::cout << "\nt = " << t << ", f = " << f << std::endl;
	std::cout << "min( t, f ) = " << ::min(t, f) << std::endl;
	std::cout << "max( t, f ) = " << ::max(t, f) << std::endl;
	return 0;
}