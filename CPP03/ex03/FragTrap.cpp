#include "FragTrap.hpp"

#include <iostream>
#include <string>

FragTrap::FragTrap()
{
	std::cout << "\033[32m";
	std::cout << "Default FragTrap constructor called\n";
	std::cout << "\033[0m";
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "\033[32m";
	std::cout << "Default FragTrap constructor called\n";
	std::cout << "\033[0m";
	this->name = name;
	HP = 100;
	EP = 100;
	DMG = 30;
}

FragTrap::FragTrap(const FragTrap &ref)
{
	name = ref.name;
	HP = ref.HP;
	EP = ref.EP;
	DMG = ref.DMG;

	std::cout << "\033[36m";
	std::cout << "Copy FragTrap constructor called\n";
	std::cout << "\033[0m";
}

FragTrap::~FragTrap()
{
	std::cout << "\033[31m";
	std::cout << "Default FragTrap destructor called\n";
	std::cout << "\033[0m";
}

FragTrap& FragTrap::operator=(const FragTrap &ref)
{
	if (this == &ref)
		return (*this);
	name = ref.name;
	HP = ref.HP;
	EP = ref.EP;
	DMG = ref.DMG;

	std::cout << "\033[33m";
	std::cout << "Assignment FragTrap operator called\n";
	std::cout << "\033[0m";

	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "HEY, HIGH FIVES GUYS !\n";
}