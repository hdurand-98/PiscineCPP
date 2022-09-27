#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string nom)
{
	this->_name = nom;
}

Zombie::~Zombie()
{
	std::cout << "Beloved zombie " << this->_name << " is dead. Press F in the chat.\n";
}

void Zombie::Announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ\n";
}