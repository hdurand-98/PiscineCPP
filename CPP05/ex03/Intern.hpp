#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"
#include <string>

class Intern
{
	public:
	Intern();
	Intern(const Intern &ref);
	~Intern();
	Intern &operator=(const Intern &ref);

	Form* MakeForm(std::string formName, std::string formTarget);
};

#endif