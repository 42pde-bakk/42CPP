#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    Bureaucrat      bossman("bossman", 150);
    try {
        Bureaucrat zak("harrie", 0);
        std::cout << zak;
    }
    catch (std::exception& e) {
        std::cout << "an exception occurred: " << e.what() << std::endl;
    }
    try {
      bossman.decreaseGrade();
    }
    catch (std::exception& e) {
      std::cout << "exception occurred in part 2: " << e.what() << std::endl;
    }
}
