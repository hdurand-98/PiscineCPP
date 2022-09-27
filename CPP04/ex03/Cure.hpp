#ifndef CURE_H
#define CURE_H

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &ref);
	virtual ~Cure();
	Cure &operator=(const Cure &ref);

	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif