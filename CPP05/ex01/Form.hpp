#ifndef FORM_H
#define FORM_H

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(const std::string name, const int GTS, const int GTE);
		Form(const Form &ref);
		~Form();
		Form &operator=(const Form &ref);

		std::string getName() const;
		bool getSignatureStatus() const;
		int getGradeToSign() const;
		int getGradeToExec() const;

		void beSigned(const Bureaucrat &ref);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form's grades are too high, nobody can sign it\n");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form's grades are too low, so everybody can sign it / Bureaucrat hasn't enough grade to sign it\n");
				}
		};

	private:
		const std::string name;
		const int minGradeToSign;
		const int minGradeToExec;
		bool isSigned;
};
std::ostream &operator<<(std::ostream &os, const Form &ref);

#endif