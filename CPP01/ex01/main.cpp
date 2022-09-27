#include "Zombie.hpp"
#include <string>

Zombie *zombieHorde(int N, std::string name);

int main()
{
	Zombie *zb = zombieHorde(10, "Zombar");

	for (int i = 0; i < 10; i++)
	{
		zb[i].Announce();
	}
	delete[] zb;
	return (0);
}