cmake_minimum_required(VERSION 4.3)
project(Balatro)

set(CMAKE_CXX_STANDARD 20)

add_executable(Balatro main.cpp
        Cards.h
        Cards.cpp)
