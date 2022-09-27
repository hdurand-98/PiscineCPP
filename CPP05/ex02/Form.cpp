#include "Form.hpp"
#include <iostream>
#include <string>

Form::Form() : minGradeToSign(1), minGradeToExec(1)
{}

Form::Form(const std::string name, const int GTS, const int GTE) : name(name), minGradeToSign(GTS), minGradeToExec(GTE) 
{
	if (GTS > 150 || GTE > 150)
		throw Form::GradeTooLowException();
	else if (GTS < 1 || GTS < 1)
		throw Form::GradeTooHighException();
	isSigned = false;
}

Form::Form(const Form &ref) : minGradeToSign(ref.getGradeToSign()), minGradeToExec(ref.getGradeToExec())
{
	*this = ref;
}

Form::~Form()
{

}

Form& Form::operator=(const Form &ref)
{
	if (this == &ref)
		return (*this);
	*this = ref;
	return (*this);
}

std::string Form::getName() const
{
	return (name);
}

bool Form::getSignatureStatus() const
{
	return (isSigned);
}

int Form::getGradeToSign() const
{
	return (minGradeToSign);
}

int Form::getGradeToExec() const
{
	return (minGradeToExec);
}

void Form::beSigned(const Bureaucrat &ref)
{
	if (ref.getGrade() <= minGradeToSign)
	{
		if (isSigned == true)
		{
			std::cout << "Form is already signed\n";
			return;
		}
		isSigned = true;
	}
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream &os, const Form &ref)
{
	os << "Form name : " << ref.getName() << ", Grade to sign : " << ref.getGradeToSign() 
		<< ", Grade to execute : " << ref.getGradeToExec() << ", is the Form currently signed ? : " << ref.getSignatureStatus() << std::endl;
	return (os);
}