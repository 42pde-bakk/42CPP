//
// Created by PdB on 8/9/2020.
//

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
#include <stdlib.h>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: Form("Robotomy Request Form", 72, 45, target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	static int check = 0;
	if (check == 0) {
		check += 1;
		srand(time(NULL));
	}
	Form::execute(executor);
	std::cout	<< "* drilling noises *" << std::endl;
	if (rand() % 2)
		std::cout << this->getTarget() << " has been succesfully robotomized." << std::endl;
	else
		std::cout << "Robotomizing " << this->getTarget() << " was a failure LMAO." << std::endl;
}
