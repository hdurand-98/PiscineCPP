#include "iter.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "Input an argument pls !\n";
		return (0);
	}
	char *str = av[1];
	std::cout << "Before : " << str << std::endl;
	iter(str, strlen(str), &plusOne);
	std::cout << "After : ";
	std::cout << str << std::endl;

	int *tab = new int[5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
		tab[i] = rand() % 1000;
	std::cout << "Before :";
	for (int i = 0; i < 5; i++)
		std::cout << " " << tab[i];
	std::cout << "\nAfter : ";
	iter(tab, 5, &isEven);
	return (0);
}
