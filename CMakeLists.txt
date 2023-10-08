cmake_minimum_required(VERSION 3.26)
project(BasicOperationTest)

set(CMAKE_CXX_STANDARD 14)
add_link_options(-static -static-libgcc -static-libstdc++)
add_executable(BasicOperationTest
        Main.cpp)
