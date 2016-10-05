cmake_minimum_required(VERSION 3.5)
project(GraphTheory)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp container.cpp container.hpp)
add_executable(GraphTheory ${SOURCE_FILES})
