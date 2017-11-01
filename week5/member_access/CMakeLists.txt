cmake_minimum_required(VERSION 3.8)
project(member_access)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp example.cpp example.hpp)
add_executable(member_access ${SOURCE_FILES})