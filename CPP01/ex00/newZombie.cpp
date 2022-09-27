#include "Zombie.hpp"
#include <string>

Zombie* newZombie(std::string name)
{
	Zombie* zmb = new Zombie(name);

	return (zmb);
}