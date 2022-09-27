#include "Cure.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

Cure::Cure()
{
	type = "cure";
}

Cure::~Cure()
{

}

Cure::Cure(const Cure &ref)
{
	*this = ref;
}

Cure& Cure::operator=(const Cure &ref)
{
	(void)ref;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}