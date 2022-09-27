#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include <string>

class Cat : public Animal
{
	public:
	Cat();
	Cat(const Cat &ref);
	~Cat();
	Cat& operator=(const Cat &ref);

	virtual void makeSound() const;
};

#endif