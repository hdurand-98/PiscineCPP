#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <string>

class WrongAnimal
{
	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &ref);
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal &ref);

	void makeSound() const;
	virtual std::string getType() const;

	protected:
		std::string type;	
};

#endif