#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "\033[32m";
    std::cout << "Brain : Default constructor called\n";
    std::cout << "\033[0m";
}

Brain::Brain(const Brain &ref)
{
	(void)ref;
	std::cout << "\033[36m";
	std::cout << "Brain : Copy constructor called\n";
    std::cout << "\033[0m";
}

Brain::~Brain()
{
	std::cout << "\033[31m";
    std::cout << "Brain : Default destructor called\n";
    std::cout << "\033[0m";
}

Brain& Brain::operator=(const Brain &ref)
{
	if (this == &ref)
		return (*this);
	std::cout << "\033[33m";
	std::cout << "Brain : Assignment operator called\n";
    std::cout << "\033[0m";
	return (*this);
}