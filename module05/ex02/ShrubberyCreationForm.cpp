//
// Created by PdB on 8/9/2020.
//

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: Form("Shrubbery Creation Form", 145, 137, target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::string filename = this->getTarget();
	filename.append("_shrubbery");
	std::ofstream out(filename.c_str());
	if (!out)
		throw FileCreationException();
	out << ""
		"                                  .         ;" << std::endl <<
		"     .              .              ;%     ;;" << std::endl <<
		"       ,           ,                :;%  %;" << std::endl <<
		"        :         ;                   :;%;'     .," << std::endl <<
		".        %;     %;            ;        %;'    ,;" << std::endl <<
		" ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl <<
		"  %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl <<
		"   ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
		"    `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
		"     `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
		"        `:%;.  :;bd%;          %;@%;'" << std::endl <<
		"          `@%:.  :;%.         ;@@%;'" << std::endl <<
		"            `@%.  `;@%.      ;@@%;" << std::endl <<
		"              `@%%. `@%%    ;@@%;" << std::endl <<
		"                ;@%. :@%%  %@@%;" << std::endl <<
		"                  %@bd%%%bd%%:;" << std::endl <<
		"                    #@%%%%%:;;" << std::endl <<
		"                    %@@%%%::;" << std::endl <<
		"                    %@@@%(o);  ." << std::endl <<
		"                    %@@@o%;:(.,'" << std::endl <<
		"                `.. %@@@o%::;" << std::endl <<
		"                   `)@@@o%::;" << std::endl <<
		"                    %@@(o)::;" << std::endl <<
		"                   .%@@@@%::;" << std::endl <<
		"                   ;%@@@@%::;." << std::endl <<
		"                  ;%@@@@%%:;;;."  << std::endl <<
		"              ...;%@@@@@%%:;;;;,.." << std::endl;
	out.close();
}
