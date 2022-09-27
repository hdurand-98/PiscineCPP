#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = nullptr;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& ekpWeapon)
{
	this->_weapon = &ekpWeapon;
}