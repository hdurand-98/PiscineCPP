#include "Data.hpp"
#include <iostream>
#include <stdint.h>

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t dat)
{
	return (reinterpret_cast<Data *>(dat));
}

int main()
{
	Data *ptr = new Data;

	ptr->nb = 5;
	std::cout << "Before serialize : address = " << ptr << " data = " << ptr->nb << std::endl;
	uintptr_t tmp = serialize(ptr);
	std::cout << "Serialized data : " << tmp << std::endl;
	ptr = deserialize(tmp);
	std::cout << "After serialize : address = " << ptr << " data = " << ptr->nb << std::endl;
	return (0);
}