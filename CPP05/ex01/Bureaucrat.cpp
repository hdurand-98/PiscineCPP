#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref)
{
	*this = ref;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &ref)
{
	if (this == &ref)
		return (*this);
	*this = ref;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::Demote()
{
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade++;
}

void Bureaucrat::Promote()
{
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade--;
}

void Bureaucrat::signForm(Form &ref)
{
	if (grade <= ref.getGradeToSign())
	{
		ref.beSigned(*this);
		std::cout << getName() << " has successfully signed Form " << ref.getName() << std::endl;
	}
	else
		std::cout << getName() << " cannot sign Form " << ref.getName() << " because his grade is too low\n";
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &ref)
{
	os << ref.getName() << ", Bureaucrat grade : " << ref.getGrade() << std::endl;
	return (os);
}