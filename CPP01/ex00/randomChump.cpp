#include <string>
#include "Zombie.hpp"

void randomChump(std::string nom)
{
	Zombie zmb(nom);

	zmb.Announce();
}