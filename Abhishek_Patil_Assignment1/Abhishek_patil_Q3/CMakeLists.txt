cmake_minimum_required(VERSION 3.21)
project(Abhishek_patil_Q3)

set(CMAKE_CXX_STANDARD 14)

include_directories(Template/include)

add_executable(Abhishek_patil_Q3
        Template/include/std_lib_facilities.h
        Template/src/montecarlo.cpp)
