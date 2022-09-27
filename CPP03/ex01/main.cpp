#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap instance("Hector");
	ScavTrap number2(instance);
	ScavTrap number3("Troll");
	number3 = instance;

	instance.attack("Lowain");
	instance.takeDamage(50);
	instance.beRepaired(30);
	instance.guardGate();

	return (0);
}