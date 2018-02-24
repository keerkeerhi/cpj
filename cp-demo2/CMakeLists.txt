cmake_minimum_required(VERSION 3.9)
project(cp_demo2)

set(CMAKE_CXX_STANDARD 11)

add_library(cp_demo2 SHARED library.cpp library.h)