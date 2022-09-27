#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
	std::cout << "Creating a ShrubberyCreationForm, signing it and executing it :\n";
	try
	{
		ShrubberyCreationForm SCF("forest");
		Bureaucrat B("Bob", 137);
		SCF.beSigned(B);
		SCF.execute(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Creating a RobotomyRequestForm, signing it and executing it :\n";
	try
	{
		RobotomyRequestForm RRF("Ludwig");
		Bureaucrat B("Bob", 45);
		RRF.beSigned(B);
		RRF.execute(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Creating a PresidentialPardonForm, signing it and executing it :\n";
	try
	{
		PresidentialPardonForm PPF("Jean Lasalle");
		Bureaucrat B("Bob", 5);
		PPF.beSigned(B);
		PPF.execute(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Creating a PresidentialPardonForm, executing it without signing it :\n";
	try
	{
		PresidentialPardonForm PPF("Jean Lasalle");
		Bureaucrat B("Bob", 5);
		PPF.execute(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Creating a PresidentialPardonForm, signing it with a grade 10 Bureaucrat and executing it with the same one (enough for signing but not for exec) :\n";
	try
	{
		PresidentialPardonForm PPF("Jean Lasalle");
		Bureaucrat B("Bob", 10);
		PPF.beSigned(B);
		PPF.execute(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Creating a RobotomyRequestForm, signing it and executing it with Bureaucrat::executeForm() :\n";
	try
	{
		RobotomyRequestForm RRF("Ludwig");
		Bureaucrat B("Bob", 45);
		RRF.beSigned(B);
		B.executeForm(RRF);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::cout << "Creating a RobotomyRequestForm, executing it with Bureaucrat::executeForm() without signing it :\n";
	try
	{
		RobotomyRequestForm RRF("Ludwig");
		Bureaucrat B("Bob", 45);
		B.executeForm(RRF);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Creating a RobotomyRequestForm, signing it and executing it with a low-grade Bureaucrat::executeForm() :\n";
	try
	{
		RobotomyRequestForm RRF("Ludwig");
		Bureaucrat B("Bob", 46);
		RRF.beSigned(B);
		B.executeForm(RRF);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}