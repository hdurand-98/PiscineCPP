#include "Zombie.hpp"
#include <string>

Zombie *newZombie(std::string name);
void randomChump(std::string nom);
class Zombie;

int main()
{
	Zombie* zomb;

	zomb = newZombie("Zombar");
	delete zomb;

	randomChump("Zomziebar");

	return (0);
}