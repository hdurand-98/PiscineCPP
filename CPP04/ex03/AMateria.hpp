#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
public:
	AMateria();
	AMateria(const AMateria &ref);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &ref);

	std::string const &getType() const; //Returns the materia type
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
	
	protected:
		std::string type;
};

#endif