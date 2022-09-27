#include "Karen.hpp"
#include <iostream>

int returnLevel(std::string lvl)
{
	if (lvl.compare("DEBUG") == 0)
		return (1);
	else if (lvl.compare("INFO") == 0)
		return (2);
	else if (lvl.compare("WARNING") == 0)
		return (3);
	else if (lvl.compare("ERROR") == 0)
		return (4);
	else
		return (0);
}

int main(int ac, char **av)
{
	Karen instance;
	std::string level(av[1]);

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments\n";
		return (0);
	}
	switch (returnLevel(level))
	{
		case 1:
			std::cout << "[ DEBUG ]\n";
			instance.complain("debug");
			std::cout << std::endl;
			std::cout << "[ INFO ]\n";
			instance.complain("info");
			std::cout << std::endl;
			std::cout << "[ WARNING ]\n";
			instance.complain("warning");
			std::cout << std::endl;
			std::cout << "[ ERROR ]\n";
			instance.complain("error");
			break;
		case 2:
			std::cout << "[ INFO ]\n";
			instance.complain("info");
			std::cout << std::endl;
			std::cout << "[ WARNING ]\n";
			instance.complain("warning");
			std::cout << std::endl;
			std::cout << "[ ERROR ]\n";
			instance.complain("error");
			break;
		case 3:
			std::cout << "[ WARNING ]\n";
			instance.complain("warning");
			std::cout << std::endl;
			std::cout << "[ ERROR ]\n";
			instance.complain("error");
			break;
		case 4:
			std::cout << "[ ERROR ]\n";
			instance.complain("error");
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
	return (0);
}