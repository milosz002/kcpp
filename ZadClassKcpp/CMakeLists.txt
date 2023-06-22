cmake_minimum_required(VERSION 3.5)
project(program)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(program main.cc src/ZadKcpp.cc)
target_include_directories(program PUBLIC include)
