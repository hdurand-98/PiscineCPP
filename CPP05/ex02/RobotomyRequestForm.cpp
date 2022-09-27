#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref)
{
	*this = ref;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &ref)
{
	if (this == &ref)
		return (*this);
	*this = ref;
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (getSignatureStatus() == false)
		throw Form::FormNotSigned();
	else
	{
		if (executor.getGrade() <= getGradeToExec())
		{
			srand(time(NULL));
			int i = rand() % 2;
			if (i == 1)
				std::cout << "* FWIIIIIIIIIIIIII * " << target << " has been successfully robotomized\n";
			else
				std::cout << target << " hasn't been robotimized but it may never recover from this, RIP in piece little angle\n";
		}
		else
			throw Form::GradeTooHighException();
	}
}