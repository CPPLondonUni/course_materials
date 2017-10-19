cmake_minimum_required(VERSION 3.8)
project(fibonacci CXX)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES fib.cpp fib.hpp)
add_library(fibonacci ${SOURCE_FILES})

add_executable(test_fibonacci test_fib.cpp)
target_link_libraries(test_fibonacci fibonacci)