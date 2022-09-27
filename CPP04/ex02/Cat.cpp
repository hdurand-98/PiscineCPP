#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

Cat::Cat()
{
	type = "Cat";
	std::cout << "\033[32m";
	std::cout << "Cat : Default constructor called\n";
    std::cout << "\033[0m";

	cerveau = new Brain();
}

Cat::Cat(const Cat &ref)
{
	type = ref.type;
	std::cout << "\033[36m";
	std::cout << "Cat : Copy constructor called\n";
    std::cout << "\033[0m";

	cerveau = new Brain();
	*cerveau = *(ref.cerveau);
	std::cout << "Original Cat brain address " << ref.cerveau << std::endl;
	std::cout << "Copy Cat brain address " << cerveau << std::endl;
}

Cat::~Cat()
{
	delete cerveau;
	std::cout << "\033[31m";
    std::cout << "Cat : Default destructor called\n";
    std::cout << "\033[0m";
}

Cat& Cat::operator=(const Cat &ref)
{
	if (this == &ref)
		return (*this);
	type = ref.type;
	if (cerveau == nullptr)
		cerveau = new Brain();
	*cerveau = *(ref.cerveau);

	std::cout << "\033[33m";
    std::cout << "Cat : Assignment operator called\n";
    std::cout << "\033[0m";

	std::cout << "Original Cat brain address " << ref.cerveau << std::endl;
	std::cout << "Copy Cat brain address " << cerveau << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou, j'ai un chat dans la gorge\n";
}