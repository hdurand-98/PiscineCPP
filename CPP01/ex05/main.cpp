#include "Karen.hpp"

int main()
{
	Karen instance;

	instance.complain("debug");
	instance.complain("info");
	instance.complain("warning");
	instance.complain("error");
	instance.complain("blabla");
	return (0);
}