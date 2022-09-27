#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <string>

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "Now let's try with wrong animals\n";

	const WrongAnimal *WA = new WrongAnimal();
	const WrongAnimal *WC = new WrongCat();
	std::cout << WC->getType() << " " << std::endl;
	WA->makeSound();
	WC->makeSound();

	delete WA;
	delete WC;
	return (0);
}