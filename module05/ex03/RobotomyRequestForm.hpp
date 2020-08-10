//
// Created by PdB on 8/9/2020.
//

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdexcept>
#include <string>

class Bureaucrat;
class RobotomyRequestForm : public Form {
public:
  RobotomyRequestForm(const std::string& target);
  ~RobotomyRequestForm();

	void	execute(Bureaucrat const & executor) const;
private:
  RobotomyRequestForm();
  RobotomyRequestForm(const RobotomyRequestForm &other);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
};
std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &self);

#endif // FORM_FORM_HPP
