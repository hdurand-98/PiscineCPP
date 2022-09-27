#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{
	public :

	Zombie();
	~Zombie();

	void Announce();
	void SetName(std::string name);

	private :

	std::string _name;
};

#endif