//
// Created by PdB on 8/9/2020.
//

#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: Form("Presidential Pardon Form", 25, 5, target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
