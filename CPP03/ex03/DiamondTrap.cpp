#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(std::string name)// : ClapTrap(name.append("_clap_name")) , ScavTrap() , FragTrap()
{
	this->name = name;
	HP = 100;
	EP = 50;
	DMG = 30;
	this->ClapTrap::name = name.append("_clap_name");
	std::cout << "\033[32m";
	std::cout << "Default DiamondTrap constructor called\n";
	std::cout << "\033[0m";
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref)// : ClapTrap(), ScavTrap() , FragTrap()
{
	name = ref.name;
	HP = ref.HP;
	EP = ref.EP;
	DMG = ref.DMG;
	ClapTrap::name = ref.name;
	ClapTrap::name.append("_clap_name");

	std::cout << "\033[36m";
	std::cout << "Copy DiamondTrap constructor called\n";
	std::cout << "\033[0m";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[31m";
	std::cout << "Default DiamondTrap destructor called\n";
	std::cout << "\033[0m";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &ref)
{
	if (this == &ref)
		return (*this);
	name = ref.name;
	HP = ref.HP;
	EP = ref.EP;
	DMG = ref.DMG;
	ClapTrap::name = ref.ClapTrap::name;

	std::cout << "\033[33m";
	std::cout << "Assignment DiamondTrap operator called\n";
	std::cout << "\033[0m";
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::name << std::endl;
}
