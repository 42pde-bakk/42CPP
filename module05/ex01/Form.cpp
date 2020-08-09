//
// Created by PdB on 8/9/2020.
//

#include "Form.hpp"
#include <string>
#include <iostream>
#include <stdexcept>


Form::Form(const std::string& name, int signgrade, int execgrade) :
  _name(name), _signgrade(signgrade), _execgrade(execgrade) {
  this->_signed = false;
  if (this->_signgrade <= 0 || this->_execgrade <= 0)
      throw Form::GradeTooHighException("Grade too high");
  if (this->_signgrade > 150 || this->_execgrade > 150)
      throw Form::GradeTooLowException("Grade too low");
}

Form::~Form() { }

std::string Form::getName() const {
  return this->_name;
}

bool        Form::getSigned() const {
  return this->_signed;
}

int         Form::getSigngrade() const {
  return this->_signgrade;
}

int Form::getExecgrade() const {
  return this->_execgrade;
}

void  Form::beSigned(const Bureaucrat &bureaucrat) {
  if (bureaucrat.getGrade() > this->getSigngrade())
    throw GradeTooLowException("Grade too low");
}

std::ostream operator<<(std::ostream& out, const Form& self) {
  out << "Form " << self.getName() << ": signed?: " << self.getSigned()
      << ", signgrade: " << self.getSigngrade()
      << ", execgrade: " << self.getExecgrade() << "." << std::endl;
  return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const char *what):
    std::runtime_error(what) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char *what):
    std::runtime_error(what) {}
