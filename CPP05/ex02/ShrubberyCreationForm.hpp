#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &ref);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ref);

		virtual void execute(const Bureaucrat &executor) const;

	private:
		const std::string target;
};

#endif