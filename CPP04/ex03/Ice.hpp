#ifndef ICE_H
#define ICE_H

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &ref);
	virtual ~Ice();
	Ice &operator=(const Ice &ref);

	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif