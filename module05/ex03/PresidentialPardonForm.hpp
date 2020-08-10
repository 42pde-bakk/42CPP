//
// Created by PdB on 8/9/2020.
//

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdexcept>
#include <string>

class Bureaucrat;
class PresidentialPardonForm : public Form {
public:
  PresidentialPardonForm(const std::string& target);
  ~PresidentialPardonForm();

	void	execute(Bureaucrat const & executor) const;
private:
  PresidentialPardonForm();
  PresidentialPardonForm(const PresidentialPardonForm &other);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
};
std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &self);

#endif // FORM_FORM_HPP
