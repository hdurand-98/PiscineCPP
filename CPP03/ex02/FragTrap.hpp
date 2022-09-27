#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &ref);
		~FragTrap();
		FragTrap &operator=(const FragTrap &ref);

		void highFivesGuys();
};

#endif