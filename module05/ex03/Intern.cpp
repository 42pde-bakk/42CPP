/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: peer <peer@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 22:01:48 by peer          #+#    #+#                 */
/*   Updated: 2020/08/10 22:32:01 by peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Form* new_shrub(std::string const& target) {
	return new ShrubberyCreationForm(target);
}

Form* new_pardon(std::string const& target) {
	return new PresidentialPardonForm(target);
}

Form* new_robo(std::string const& target) {
	return new RobotomyRequestForm(target);
}

typedef Form *(*t_make_funct)(const std::string&);

Intern::Intern() {}

Intern::~Intern() {}

Form*	Intern::makeForm(const std::string& formname, const std::string& formtarget) const {
	const std::string types[3] = {	"Presidential Pardon Form",
									"Robotomy Request Form",
									"Shrubbery Creation Form"};
	    static t_make_funct makeFormFuncts[3] = {
									new_shrub,
									new_pardon,
									new_robo,
									};
	for (int i = 0; i < 3; i++) {
		if (formname == types[i]) {
			std::cout << "Intern creates " << formname << "." << std::endl;
			return makeFormFuncts[i](formtarget);
		}
	}
	std::cout << "No such formname found." << std::endl;
	return NULL;
	
}
