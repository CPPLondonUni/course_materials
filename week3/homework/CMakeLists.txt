cmake_minimum_required(VERSION 3.8)
project(geometry)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp point.cpp point.hpp line.cpp line.hpp multiline.cpp multiline.hpp)
add_executable(geometry ${SOURCE_FILES})