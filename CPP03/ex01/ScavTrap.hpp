#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &ref);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &ref);

		void attack(std::string const &target);
		void guardGate();
};

#endif