#include "ScavTrap.hpp"

#include <iostream>
#include <string>

ScavTrap::ScavTrap()
{
	std::cout << "\033[32m";
	std::cout << "Default ScavTrap constructor called\n";
	std::cout << "\033[0m";
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "\033[32m";
	std::cout << "Default ScavTrap constructor called\n";
	std::cout << "\033[0m";
	this->name = name;
	HP = 100;
	EP = 50;
	DMG = 20;
}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
	name = ref.name;
	HP = ref.HP;
	EP = ref.EP;
	DMG = ref.DMG;

	std::cout << "\033[36m";
	std::cout << "Copy ScavTrap constructor called\n";
	std::cout << "\033[0m";
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[31m";
	std::cout << "Default ScavTrap destructor called\n";
	std::cout << "\033[0m";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ref)
{
	if (this == &ref)
		return (*this);
	name = ref.name;
	HP = ref.HP;
	EP = ref.EP;
	DMG = ref.DMG;

	std::cout << "\033[33m";
	std::cout << "Assignment ScavTrap operator called\n";
	std::cout << "\033[0m";

	return (*this);
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << DMG << " points of damage!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " has entered Gate keeper mode\n";
}