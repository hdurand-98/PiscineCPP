#include "ClapTrap.hpp"


int main()
{
	ClapTrap instance("Hector");
	ClapTrap number2(instance);
	ClapTrap number3("Hugo");
	number3 = instance;

	instance.attack("Transcendence");
	instance.takeDamage(7);
	instance.beRepaired(5);
	return (0);
}