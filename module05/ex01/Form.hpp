//
// Created by PdB on 8/9/2020.
//

#ifndef FORM_FORM_HPP
#define FORM_FORM_HPP
#include "Bureaucrat.hpp"
#include <string>
#include <stdexcept>

class Bureaucrat;
class Form {
public:
  Form(const std::string& name, int signgrade, int execgrade);
  ~Form();

  std::string getName() const;
  bool        getSigned() const;
  int        getSigngrade() const;
  int        getExecgrade() const;
  void        beSigned(const Bureaucrat& bureaucrat);

  class GradeTooHighException: public std::runtime_error {
  public:
    explicit GradeTooHighException(const char* what);
  };

  class GradeTooLowException: public std::runtime_error {
  public:
    explicit GradeTooLowException(const char* what);
  };
private:
  Form();
  Form(const Form& other);
  Form& operator=(const Form& other);
  const std::string _name;
  bool              _signed;
  const int         _signgrade;
  const int         _execgrade;
};
std::ostream operator<<(std::ostream& out, const Form& self);

#endif // FORM_FORM_HPP
