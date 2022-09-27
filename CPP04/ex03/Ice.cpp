#include "Ice.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

Ice::Ice()
{
	type = "ice";
}

Ice::~Ice()
{

}

Ice::Ice(const Ice &ref)
{
	*this = ref;
}

Ice& Ice::operator=(const Ice &ref)
{
	(void)ref;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}