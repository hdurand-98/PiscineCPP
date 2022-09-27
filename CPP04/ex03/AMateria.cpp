#include "AMateria.hpp"
#include <string>

AMateria::AMateria()
{

}

AMateria::~AMateria()
{

}

AMateria::AMateria(const AMateria &ref)
{
	*this = ref;
}

AMateria& AMateria::operator=(const AMateria &ref)
{
	(void)ref;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}