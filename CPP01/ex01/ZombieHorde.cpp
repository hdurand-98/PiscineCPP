#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* zmbs = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		zmbs[i].SetName(name);
	}
	return (&zmbs[0]);
}