#include "easyfind.hpp"
#include <iterator>
#include <list>
#include <vector>
#include <iostream>

int main()
{
	std::list<int> lst;
	std::list<int>::iterator ptr;

	lst.push_back(1);
	lst.push_back(12);
	lst.push_back(113);

	ptr = easyfind(&lst, 12);
	std::cout << *ptr << std::endl;

	std::vector<int> v;
	v.push_back(13);
	std::vector<int>::iterator ptr2;
	ptr2 = easyfind(&v, 12);
	return (0);
}
