#ifndef EASYFIND_H
#define EASYFIND_H

#include <iterator>
#include <algorithm>
#include <iostream>

template <typename T>
typename T::iterator easyfind(T *container, int wanted)
{
	typename T::iterator ptr = std::find(container->begin(), container->end(), wanted);
	if (ptr == container->end())
		std::cout << "No match found !\n";
	return (ptr);
}

#endif