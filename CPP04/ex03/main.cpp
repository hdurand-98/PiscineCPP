# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"
#include <iostream>

int main()
{
	std::cout << "~Creating MateriaSource~" << std::endl;
	IMateriaSource* src = new MateriaSource();

	AMateria* tmp;
	std::cout << "Creating Ice without learning it :\n";
	tmp = src->createMateria("ice");
	std::cout << std::endl;

	std::cout << "Creating Cure without learning it :\n";
	tmp = src->createMateria("cure");
	std::cout << std::endl;

	std::cout <<  "~Learning Ice & Cure materia in MateriaSource~\n" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "Making the MateriaSource full :\n";
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	std::cout << std::endl;

	std::cout << "Creating an unknown type materia :\n";
	AMateria *fake;
	fake = src->createMateria("fake");
	std::cout << std::endl;

	std::cout << "~Creating Azur Lionswill~" << std::endl;
	ICharacter* Azur = new Character("Azur");
	std::cout << "~Creating Selen Ardent~" << std::endl;
	ICharacter* Selen = new Character("Selen");

	std::cout << "~Equipping Azur with Ice~\n";
	tmp = src->createMateria("ice");
	Azur->equip(tmp);
	std::cout << "Making Azur use Ice on Selen for SCIENCE:\n";
	Azur->use(0, *Selen);
	std::cout << std::endl;

	std::cout << "Equipping Azur with Cure\n";
	tmp = src->createMateria("cure");
	Azur->equip(tmp);
	std::cout << "Making Azur use Cure on Selen because he's a good guy (sometimes)\n";
	Azur->use(1, *Selen);
	std::cout << std::endl;

	std::cout << "Making Selen use Ice without having some:\n";
	Selen->use(0, *Azur);
	std::cout << std::endl;

	std::cout << "Equipping Selen with Ice and making her use it so she can have some kind of revenge:\n";
	tmp = src->createMateria("ice");
	Selen->equip(tmp);
	Selen->use(0, *Azur);
	std::cout << std::endl;

	std::cout << "Removing Ice from Selen's inventory because they're even now\n";
	Selen->unequip(0);
	Selen->use(0, *Azur);
	std::cout << std::endl;

	std::cout << "But she's taking it again ! Her revenge isn't over yet ! (Proving that Materia isn't destroyed on Unequip() ):\n";
	Selen->equip(tmp);
	Selen->use(0, *Azur);
	std::cout << std::endl;

	std::cout << "OMG, Selen is filling her inventory with Cures so Azur can't heal himself ! What kind of devil is that girl ?\n";
	AMateria* cure2 = src->createMateria("cure");
	Selen->equip(cure2);
	AMateria* cure3 = src->createMateria("cure");
	Selen->equip(cure3);
	AMateria* cure4 = src->createMateria("cure");
	Selen->equip(cure4);
	AMateria* cure5 = src->createMateria("cure");
	Selen->equip(cure5);
	delete cure5;

	std::cout << "\n~Deleting Characters and MateriaSource~" << std::endl;
	delete Selen;
	delete Azur;
	delete src;
	return (0);
}
