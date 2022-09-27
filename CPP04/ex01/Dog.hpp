#ifndef DOG_H
#define DOG_H

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
	Dog();
	Dog(const Dog &ref);
	~Dog();
	Dog& operator=(const Dog &ref);

	virtual void makeSound() const;

	private:
	Brain* cerveau;
};

#endif