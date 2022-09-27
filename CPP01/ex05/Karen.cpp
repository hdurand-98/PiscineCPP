#include "Karen.hpp"
#include <string>
#include <iostream>

Karen::Karen()
{

}

Karen::~Karen()
{

}

void Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void Karen::complain(std::string level)
{
	std::string *funcNames = new std::string[4];
	void (Karen::*tab[4])();
	funcNames[0] = "debug";
	funcNames[1] = "info";
	funcNames[2] = "warning";
	funcNames[3] = "error";
	tab[0] = &Karen::debug;
	tab[1] = &Karen::info;
	tab[2] = &Karen::warning;
	tab[3] = &Karen::error;

	int i = 0;
	while (i < 4)
	{
		if (level.compare(funcNames[i]) == 0)
		{
			(this->*tab[i])();
			break;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Not a valid level\n";
}
