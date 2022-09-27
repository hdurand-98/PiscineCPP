#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal()
{
	std::cout << "\033[32m";
    std::cout << "Animal : Default constructor called\n";
    std::cout << "\033[0m";
}

Animal::Animal(const Animal &ref)
{
	type = ref.type;

	std::cout << "\033[36m";
    std::cout << "Animal : Copy constructor called\n";
    std::cout << "\033[0m";
}

Animal::~Animal()
{
	std::cout << "\033[31m";
    std::cout << "Animal : Default destructor called\n";
    std::cout << "\033[0m";
}

Animal& Animal::operator=(const Animal &ref)
{
	if (this == &ref)
		return (*this);
	type = ref.type;

	std::cout << "\033[33m";
    std::cout << "Animal : Assignment operator called\n";
    std::cout << "\033[0m";
	return (*this);
}

std::string Animal::getType() const
{
	return (type);
}