#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal()
{
	std::cout << "\033[32m";
    std::cout << "WrongAnimal : Default constructor called\n";
    std::cout << "\033[0m";
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
	type = ref.type;

	std::cout << "\033[36m";
    std::cout << "WrongAnimal : Copy constructor called\n";
    std::cout << "\033[0m";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[31m";
    std::cout << "WrongAnimal : Default destructor called\n";
    std::cout << "\033[0m";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &ref)
{
	if (this == &ref)
		return (*this);
	type = ref.type;

	std::cout << "\033[33m";
    std::cout << "WrongAnimal : Assignment operator called\n";
    std::cout << "\033[0m";
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Uuuuh ? What kind of sound make a WrongAnimal ?\n";
}

std::string WrongAnimal::getType() const
{
	return (type);
}