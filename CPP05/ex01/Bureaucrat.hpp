#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &ref);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &ref);

		std::string getName() const;
		int getGrade() const;

		void Promote();
		void Demote();

		void signForm(Form &ref);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Your grade can't be higher than one ! I mean, how can you be higher than the CEO ?\n");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Your grade can't be lower than 150 ! I mean, there's nothing lower than intern\n");
				}
		};

	private:
		const std::string name;
		int grade;
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &ref);

#endif