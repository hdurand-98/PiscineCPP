#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	std::cout << "Trying to create a grade 0 Bureaucrat :\n";
	try
	{
		Bureaucrat H("Hugo", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Trying to create a grade 151 Bureaucrat :\n";
	try
	{
		Bureaucrat C("Corentin", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Creating a grade 50 Bureaucrat and then using << overload :\n";
	try
	{
		Bureaucrat M("Melchior", 50);
		std::cout << M;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Creating a grade 150 Bureaucrat and then Demoting it :\n";
	try
	{
		Bureaucrat C("Clem", 150);
		std::cout << C;
		C.Demote();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Creating a grade 1 Bureaucrat and then Promoting it :\n";
	try
	{
		Bureaucrat X("Xavier", 1);
		std::cout << X;
		X.Promote();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Creating a grade 50 Bureaucrat, Demoting it and then Promoting it back to normal :\n";
	try
	{
		Bureaucrat N("Normal", 50);
		std::cout << N;
		N.Demote();
		std::cout << N;
		N.Promote();
		std::cout << N;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}