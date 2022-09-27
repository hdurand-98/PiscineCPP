#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog()
{
	type = "Dog";
	std::cout << "\033[32m";
    std::cout << "Dog : Default constructor called\n";
    std::cout << "\033[0m";
}

Dog::Dog(const Dog &ref)
{
	type = ref.type;

	std::cout << "\033[36m";
    std::cout << "Dog : Copy constructor called\n";
    std::cout << "\033[0m";
}

Dog::~Dog()
{
	std::cout << "\033[31m";
    std::cout << "Dog : Default destructor called\n";
    std::cout << "\033[0m";
}

Dog& Dog::operator=(const Dog &ref)
{
	if (this == &ref)
		return (*this);
	type = ref.type;

	std::cout << "\033[33m";
    std::cout << "Dog : Assignment operator called\n";
    std::cout << "\033[0m";
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Whooo let the dogs out ? Wouaf Wouaf Wouaf\n";
}