#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref)
{
	*this = ref;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
	if (this == &ref)
		return (*this);
	*this = ref;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (getSignatureStatus() == false)
		throw Form::FormNotSigned();
	else
	{
		if (executor.getGrade() <= getGradeToExec())
		{
			std::string fileName = target;
			std::ofstream dest(fileName.append("_shrubbery"));
			dest << "    _\\/_\n     /\\\n     /\\\n    /  \\\n    /~~\\o\n   /o   \\\n  /~~*~~~\\\n o/    o \\\n /~~~~~~~~\\~`\n/__*_______\\\n     ||\n   \\====/\n    \\__/\n" << std::endl;
			dest << "    _\\/_\n     /\\\n     /\\\n    /  \\\n    /~~\\o\n   /o   \\\n  /~~*~~~\\\n o/    o \\\n /~~~~~~~~\\~`\n/__*_______\\\n     ||\n   \\====/\n    \\__/\n";
		}
		else
			throw Form::GradeTooHighException();
	}
}