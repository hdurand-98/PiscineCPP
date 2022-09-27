#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T>
void iter(T *array, unsigned int len, void func(T &ref))
{
	unsigned int i = 0;
	while (i < len)
	{
		func(array[i]);
		i++;
	}
}

template <typename T>
void plusOne(T & x)
{
	x++;
}

template <typename T>
void isEven(T & x)
{
	if (x % 2 == 0)
		std::cout << x << " is even\n";
}

#endif