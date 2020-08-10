//
// Created by PdB on 8/9/2020.
//

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdexcept>
#include <string>

class Bureaucrat;
class ShrubberyCreationForm : public Form {
public:
  ShrubberyCreationForm(const std::string& target);
  ~ShrubberyCreationForm();

	void	execute(Bureaucrat const & executor) const;
private:
  ShrubberyCreationForm();
  ShrubberyCreationForm(const ShrubberyCreationForm &other);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
};
std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &self);

#endif // FORM_FORM_HPP
