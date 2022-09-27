#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &ref);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &ref);

		virtual void execute(const Bureaucrat &executor);

	private:
		const std::string target;
};

#endif