#ifndef CHARACTER_H
#define CHARACTER_H

#include "AMateria.hpp"
#include <string>

class AMateria;

class Character : public ICharacter
{
	public:
	Character(std::string name);
	Character(const Character &ref);
	~Character();
	Character& operator=(const Character &ref);

	virtual std::string const &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
	
	private:
		AMateria* inventory[4];
		std::string name;
};

#endif