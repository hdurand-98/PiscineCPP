#ifndef WRONGCAT_H
#define WRONGCAT_H

#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	WrongCat();
	WrongCat(const WrongCat &ref);
	~WrongCat();
	WrongCat& operator=(const WrongCat &ref);

	void makeSound() const;
};

#endif