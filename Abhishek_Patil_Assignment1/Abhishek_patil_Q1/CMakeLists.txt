cmake_minimum_required(VERSION 3.21)
project(Template__2_)

set(CMAKE_CXX_STANDARD 14)

include_directories(Template/include)

add_executable(Template__2_
        Template/include/std_lib_facilities.h
        Template/src/main.cpp)
