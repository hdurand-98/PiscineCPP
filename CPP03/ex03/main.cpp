#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap instance("Hector");
	//DiamondTrap number2(instance);
	//DiamondTrap number3("Troll");
	//number3 = instance;

	instance.attack("Jean-Michel");
	instance.takeDamage(50);
	instance.beRepaired(30);
	instance.highFivesGuys();
	instance.guardGate();
	instance.whoAmI();

	return (0);
}