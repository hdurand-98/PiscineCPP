#include "WrongCat.hpp"
#include <iostream>
#include <string>

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "\033[32m";
    std::cout << "WrongCat : Default constructor called\n";
    std::cout << "\033[0m";
}

WrongCat::WrongCat(const WrongCat &ref)
{
	type = ref.type;

	std::cout << "\033[36m";
    std::cout << "WrongCat : Copy constructor called\n";
    std::cout << "\033[0m";
}

WrongCat::~WrongCat()
{
	std::cout << "\033[31m";
    std::cout << "WrongCat : Default destructor called\n";
    std::cout << "\033[0m";
}

WrongCat& WrongCat::operator=(const WrongCat &ref)
{
	if (this == &ref)
		return (*this);
	type = ref.type;

	std::cout << "\033[33m";
    std::cout << "WrongCat : Assignment operator called\n";
    std::cout << "\033[0m";
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Miaou, j'ai un mauvais chat dans la gorge\n";
}