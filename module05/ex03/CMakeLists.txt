cmake_minimum_required(VERSION 3.17)
project(Bureaucrat)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra")
set(CMAKE_CXX_STANDARD 98)

add_executable(Form main.cpp Bureaucrat.cpp Bureaucrat.hpp Form.hpp Form.cpp)