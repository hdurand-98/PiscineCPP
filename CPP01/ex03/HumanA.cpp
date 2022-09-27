#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& ekpWeapon) : _name(name), _weapon(ekpWeapon)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}