#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
	Bureaucrat harry("harry", 120);
	Bureaucrat bossman("dickface", 1);
	ShrubberyCreationForm	shrub("testfile");
	harry.executeForm(shrub);
	try {
		shrub.execute(harry);
	}
	catch (std::exception& e) {
		std::cout << harry.getName() << " cant execute " << shrub.getName()
					<< " because " << e.what() << std::endl;
	}
	bossman.signForm(shrub);
	harry.executeForm(shrub);

	RobotomyRequestForm	robo("Pop Smoke");

	bossman.signForm(robo);
	harry.executeForm(robo);
	bossman.executeForm(robo);
	bossman.executeForm(robo);

	PresidentialPardonForm	president("Zafods brother, Zeefuik");

	harry.executeForm(president);
	bossman.signForm(president);
	harry.executeForm(president);
	bossman.executeForm(president);
	bossman.executeForm(president);

}
