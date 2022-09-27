#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <string>
#include <iostream>

Character::Character(std::string name)
{
	this->name = name;
	for(int i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		delete inventory[i];
}

Character::Character(const Character &ref)
{
	name = ref.getName();
	for (int i = 0; i < 4; i++)
	{
		if (ref.inventory[i] != nullptr)
			inventory[i] = ref.inventory[i]->clone();
	}
}

Character& Character::operator=(const Character &ref)
{
	if (inventory[0] != nullptr)
	{
		for(int i = 0; i < 4; i++)
		delete inventory[i];
	}
	name = ref.getName();
	for (int i = 0; i < 4; i++)
	{
		if (ref.inventory[i] != nullptr)
			inventory[i] = ref.inventory[i]->clone();
	}
	return (*this);
}

const std::string& Character::getName() const
{
	return (name);
}

void Character::equip(AMateria *mat)
{
	if (mat == nullptr)
	{
		std::cout << "Inexistant materia\n";
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == nullptr)
		{
			inventory[i] = mat;
			return ;
		}
	}
	std::cout << "Inventory is full\n";
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Wrong inventory index\n";
		return ;
	}
	inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Wrong inventory index\n";
		return ;
	}
	if (inventory[idx] != nullptr)
		inventory[idx]->use(target);
	else
		std::cout << "No Materias at given index, what should " << name << " use ? Her hands ?\n";
}