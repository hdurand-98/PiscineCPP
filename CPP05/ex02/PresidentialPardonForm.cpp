#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref)
{
	*this = ref;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &ref)
{
	if (this == &ref)
		return (*this);
	*this = ref;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (getSignatureStatus() == false)
		throw Form::FormNotSigned();
	else
	{
		if (executor.getGrade() <= getGradeToExec())
		{
			std::cout << target << " has been pardonned by Zafod Beeblebrox\n";
		}
		else
			throw Form::GradeTooHighException();
	}
}