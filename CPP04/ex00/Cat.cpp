#include "Cat.hpp"
#include <iostream>
#include <string>

Cat::Cat()
{
	type = "Cat";
	std::cout << "\033[32m";
    std::cout << "Cat : Default constructor called\n";
    std::cout << "\033[0m";
}

Cat::Cat(const Cat &ref)
{
	type = ref.type;

	std::cout << "\033[36m";
    std::cout << "Cat : Copy constructor called\n";
    std::cout << "\033[0m";
}

Cat::~Cat()
{
	std::cout << "\033[31m";
    std::cout << "Cat : Default destructor called\n";
    std::cout << "\033[0m";
}

Cat& Cat::operator=(const Cat &ref)
{
	if (this == &ref)
		return (*this);
	type = ref.type;

	std::cout << "\033[33m";
    std::cout << "Cat : Assignment operator called\n";
    std::cout << "\033[0m";
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou, j'ai un chat dans la gorge\n";
}