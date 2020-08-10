#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main() {
	Intern slave;
	Bureaucrat yasqueen("Yaaas queen", 1);
	Form *hats = slave.makeForm("Presidential Pardon Form", "yermum");
	yasqueen.signForm(*hats);
	yasqueen.executeForm(*hats);
}
