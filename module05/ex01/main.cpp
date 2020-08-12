#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
	// if you want to use form.beSigned(bureaucrat) here, do so in a try/catch block
  Bureaucrat harry("Harry", 4);
  std::cout << harry << std::endl;
  Form witcher("Permit A38", 3, 2);
  harry.signForm(witcher);
	Bureaucrat boss("dickhead", 1);
	boss.signForm(witcher);
  try {
	  witcher.beSigned(harry);
  }
  catch (std::exception& e) {
	  std::cout << harry.getName() << " can't sign " << witcher.getName() << ", because "
	  		<< e.what() << "." << std::endl;
  }
}
