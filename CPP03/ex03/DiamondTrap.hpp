#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &ref);
		~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &ref);

		void attack(const std::string &ref);
		void whoAmI();

	private:
		std::string name;
};

#endif