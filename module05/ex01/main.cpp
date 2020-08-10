#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
  Bureaucrat harry("harry", 4);
  Form witcher("Permit A38", 3, 2);
  harry.signForm(witcher);
}
