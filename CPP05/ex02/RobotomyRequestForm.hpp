#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &ref);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &ref);

		virtual void execute(const Bureaucrat &executor) const;

	private:
		const std::string target;
};

#endif