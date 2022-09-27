#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string>

int main()
{
	int tabsize = 4;
	Animal *tab[tabsize];
	int i = 0;
	while (i < tabsize)
	{
		if (i < tabsize / 2)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < tabsize)
	{
		delete tab[i];
		i++;
	}
	std::cout << "Checking deep copies\n\n";

	std::cout << "Dog's Copy constructor\n";
	Dog DogA;
	Dog DogB(DogA);
	std::cout << "\nDog's Assignment operator\n";
	Dog DogC;
	DogC = DogA;

	std::cout << std::endl;

	std::cout << "Cat's Copy constructor\n";
	Cat CatA;
	Cat CatB(CatA);
	std::cout << "\nCat's Assignment operator\n";
	Cat CatC;
	CatC = CatA;

	return (0);
}