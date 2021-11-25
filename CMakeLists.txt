cmake_minimum_required(VERSION 3.17)
project(POLYMORPHISM_PROJECT4)

set(CMAKE_CXX_STANDARD 14)

add_executable(POLYMORPHISM_PROJECT4 main.cpp Shape.cpp Shape.hpp Circle.cpp Circle.hpp Rectangle.cpp Rectangle.hpp Triangle.cpp Triangle.hpp)