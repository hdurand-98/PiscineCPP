#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <string>

class ClapTrap 
{
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &ref);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &ref);

		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string name;
		int HP;
		int EP;
		int DMG;
};

#endif