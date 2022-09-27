#include "ClapTrap.hpp"
#include  "FragTrap.hpp"

int main()
{
	FragTrap instance("Hector");
	FragTrap number2(instance);
	FragTrap number3("Troll");
	number3 = instance;

	instance.attack("ROBBY");
	instance.takeDamage(50);
	instance.beRepaired(30);
	instance.highFivesGuys();

	return (0);
}