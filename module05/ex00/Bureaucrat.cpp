//
// Created by PdB on 8/9/2020.
//

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
    if (grade <= 0)
        throw GradeTooHighException("Grade too high");
    else if (grade > 150)
        throw GradeTooLowException("Grade too low");
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        this->_name = other._name;
        this->_grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {

}

std::string Bureaucrat::getName() const {
    return this->_name;
}

int         Bureaucrat::getGrade() const {
    return this->_grade;
}

void        Bureaucrat::increaseGrade() {
  if (this->_grade == 1)
      throw GradeTooHighException("Grade too high");
  this->_grade -= 1;
}

void        Bureaucrat::decreaseGrade() {
  if (this->_grade == 150)
    throw GradeTooLowException("Grade too low");
  this->_grade += 1;
}

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& self) {
    out << "<" << self.getName() << ">, bureaucrat grade " << self.getGrade() << std::endl;
    return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() 
	: std::runtime_error("Grade too high") { }

Bureaucrat::GradeTooLowException::GradeTooLowException() 
	: std::runtime_error("Grade too low") { }
	