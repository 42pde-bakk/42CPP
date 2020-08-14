/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-bakk <pde-bakk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 16:38:58 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/08/14 16:38:58 by pde-bakk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
    : _name(name), _grade(grade) {
  if (grade <= 0)
    throw GradeTooHighException();
  else if (grade > 150)
    throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) { *this = other; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  if (this != &other) {
    this->_grade = other._grade;
  }
  return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->_grade; }

void Bureaucrat::increaseGrade() {
  if (this->_grade == 1)
    throw GradeTooHighException();
  this->_grade -= 1;
}

void Bureaucrat::decreaseGrade() {
  if (this->_grade == 150)
    throw GradeTooLowException();
  this->_grade += 1;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &self) {
  out << self.getName() << ", bureaucrat grade " << self.getGrade() << "."
      << std::endl;
  return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
    : std::runtime_error("Grade too high") {}

Bureaucrat::GradeTooLowException::GradeTooLowException()
    : std::runtime_error("Grade too low") {}
