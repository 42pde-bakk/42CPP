#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main() {
  Bureaucrat harry("harry", 120);
  Bureaucrat bossman("dickface", 1);
  ShrubberyCreationForm	shrub("testfile");
	harry.executeForm(shrub);
	// shrub.execute(harry) // This dumps my core
  bossman.signForm(shrub);
	harry.executeForm(shrub);

}
