#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
  Bureaucrat  harry("harry", 4);
  Form  witcher("Permit A38", 5, 2);
  harry.signForm(witcher);
}
