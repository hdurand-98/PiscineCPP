#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>

class Zombie
{
	public :

	Zombie(std::string name);
	~Zombie();

	void Announce();

	private:

	std::string _name;
};
#endif
