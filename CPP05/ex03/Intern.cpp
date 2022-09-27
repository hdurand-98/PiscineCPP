#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

Intern::Intern()
{
}

Intern::Intern(const Intern &ref)
{
	*this = ref;
}

Intern::~Intern()
{

}

Intern& Intern::operator=(const Intern &ref)
{
	(void)ref;
	return (*this);
}

Form *makeSCF(const std::string target)
{
	std::cout << "Intern creates shrubbery creation form\n";
	return (new ShrubberyCreationForm(target));
}

Form *makeRRF(const std::string target)
{
	std::cout << "Intern creates robotomy request form\n";
	return (new RobotomyRequestForm(target));
}

Form *makePPF(const std::string target)
{
	std::cout << "Intern creates presidential pardon form\n";
	return (new PresidentialPardonForm(target));
}

Form* Intern::MakeForm(std::string formName, const std::string formTarget)
{
	std::string formNames[3];
	formNames[0] = "shrubbery creation";
	formNames[1] = "robotomy request";
	formNames[2] = "presidential pardon";

	Form *(*execs[3])(const std::string target);
	execs[0] = &makeSCF;
	execs[1] = &makeRRF;
	execs[2] = &makePPF;

	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
			return ((*execs[i])(formTarget));
	}
	std::cout << "No matching form found, intern is lost\n";
	return (nullptr);
}