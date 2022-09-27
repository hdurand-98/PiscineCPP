#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		learntMaterias[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
		delete learntMaterias[i];
}

MateriaSource::MateriaSource(const MateriaSource &ref)
{
	for(int i = 0; i < 4; i++)
		learntMaterias[i] = ref.learntMaterias[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &ref)
{
	for(int i = 0; i < 4; i++)
		delete learntMaterias[i];
	for(int i = 0; i < 4; i++)
		learntMaterias[i] = ref.learntMaterias[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria *mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (learntMaterias[i] == nullptr)
		{
			learntMaterias[i] = mat;
			return ;
		}
	}
	std::cout << "MateriaSource is full of knowledge\n";
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (learntMaterias[i] != nullptr)
		{
			std::string str = learntMaterias[i]->getType();
			if (type.compare(str) == 0)
				return (learntMaterias[i]->clone());
		}
	}
	std::cout << "Unknown Materia. \"What the heck is that ?\" says the Materia Source\n";
	return (0);
}