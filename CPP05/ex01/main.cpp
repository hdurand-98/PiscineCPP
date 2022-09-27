#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	std::cout << "Trying to create a grade 0 Form :\n";
	try
	{
		Form H("H", 0, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Trying to create a grade 151 Form :\n";
	try
	{
		Form C("C", 151, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Creating a grade 50 Form and then using << overload :\n";
	try
	{
		Form M("Demande de tonte de la pelouse avec des ciseaux", 50, 70);
		std::cout << M;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Creating a grade 50 Form, and trying to get it signed by a grade 60 Bureaucrat using Form::beSigned :\n";
	try
	{
		Bureaucrat boulet("Boulet", 60);
		Form M("Impôt sur l'air respiré", 50, 70);
		M.beSigned(boulet);
		std::cout << M;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Creating a grade 50 Form, and trying to get it signed by a grade 40 Bureaucrat using Form::beSigned :\n";
	try
	{
		Bureaucrat boulet("Boulet", 40);
		Form M("Taxes sur les impôts", 50, 70);
		M.beSigned(boulet);
		std::cout << "trying to sign an already signed form\n";
		M.beSigned(boulet);
		std::cout << M;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Creating a grade 50 Form, and trying to get it signed by a grade 60 Bureaucrat using Bureaucrat::signForm :\n";
	try
	{
		Bureaucrat boulet("Boulet", 60);
		Form M("Mise en développement de Half Life 3", 50, 70);
		boulet.signForm(M);
		std::cout << M;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Creating a grade 50 Form, and trying to get it signed by a grade 40 Bureaucrat using Bureaucrat::signForm :\n";
	try
	{
		Bureaucrat boulet("Boulet", 40);
		Form M("Laisser-passer A38", 50, 70);
		boulet.signForm(M);
		std::cout << "Trying to sign an already signed form\n";
		boulet.signForm(M);
		std::cout << M;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
