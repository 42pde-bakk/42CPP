cmake_minimum_required(VERSION 3.17)
project(Form)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra")
set(CMAKE_CXX_STANDARD 98)

add_executable(Bureaucrat main.cpp Bureaucrat.cpp Bureaucrat.hpp)