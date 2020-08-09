//
// Created by PdB on 8/9/2020.
//

#ifndef BUREAUCRAT_BUREAUCRAT_HPP
#define BUREAUCRAT_BUREAUCRAT_HPP
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Form;
class Bureaucrat {
public:
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();

    std::string getName() const;
    int         getGrade() const;
    void        increaseGrade();
    void        decreaseGrade();
  void        signForm(const Form& form);

    class GradeTooHighException: public std::runtime_error {
    public:
        explicit GradeTooHighException(const char* what);
    };

    class GradeTooLowException: public std::runtime_error {
    public:
        explicit GradeTooLowException(const char* what);
    };
private:
    Bureaucrat();
    std::string _name;
    int         _grade;
};
std::ostream&   operator<<(std::ostream& out, const Bureaucrat& self);


#endif //BUREAUCRAT_BUREAUCRAT_HPP
