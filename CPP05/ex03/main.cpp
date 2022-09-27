#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
	Intern RandomDuStunfest;

	std::cout << "Creating a ShrubberyCreationForm, signing it and executing it :\n";
	try
	{
		Bureaucrat B("Bob", 137);
		Form *f = RandomDuStunfest.MakeForm("shrubbery creation", "house");
		f->beSigned(B);
		f->execute(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Creating a RobotomyRequestForm, signing it and executing it :\n";
	try
	{
		Bureaucrat B("Bob", 45);
		Form *f = RandomDuStunfest.MakeForm("robotomy request", "Morandini");
		f->beSigned(B);
		f->execute(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Creating a PresidentialPardonForm, signing it and executing it :\n";
	try
	{
		Bureaucrat B("Bob", 5);
		Form *f = RandomDuStunfest.MakeForm("presidential pardon", "Zidane");
		f->beSigned(B);
		f->execute(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}