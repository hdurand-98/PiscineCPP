#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "\033[32m";
	std::cout << "Default constructor called\n";
	std::cout << "\033[0m";
	this->name = name;
	HP = 10;
	EP = 10;
	DMG = 0;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	name = ref.name;
	HP = ref.HP;
	EP = ref.EP;
	DMG = ref.DMG;

	std::cout << "\033[36m";
	std::cout << "Copy constructor called\n";
	std::cout << "\033[0m";
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[31m";
	std::cout << "Default destructor called\n";
	std::cout << "\033[0m";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ref)
{
	if (this == &ref)
		return (*this);
	name = ref.name;
	HP = ref.HP;
	EP = ref.EP;
	DMG = ref.DMG;

	std::cout << "\033[33m";
	std::cout << "Assignment operator called\n";
	std::cout << "\033[0m";

	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << DMG << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	HP -= amount;
	std::cout << "ClapTrap " << name << " took " << amount << " points of damage, that's gotta hurt ! It has " << HP << " HP left\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	HP += amount;
	std::cout << "ClapTrap " << name << " have been repaired of " << amount << " HP. It now has " << HP << ".\n";
}