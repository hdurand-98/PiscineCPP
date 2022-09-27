#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource &ref);
	~MateriaSource();
	MateriaSource& operator=(const MateriaSource &ref);

	virtual void learnMateria(AMateria *mat);
	virtual AMateria *createMateria(std::string const &type);

	private:
	AMateria* learntMaterias[4];
};

#endif