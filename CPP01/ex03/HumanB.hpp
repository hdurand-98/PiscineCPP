#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB();

	void attack();
	void setWeapon(Weapon& ekpWeapon);

private:
	Weapon* _weapon;
	std::string _name;
};

#endif