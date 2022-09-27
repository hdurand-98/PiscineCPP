#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
	public:
	Animal();
	Animal(const Animal &ref);
	virtual ~Animal();
	Animal& operator=(const Animal &ref);

	virtual void makeSound() const = 0;
	virtual std::string getType() const;

	protected:
		std::string type;	
};

#endif