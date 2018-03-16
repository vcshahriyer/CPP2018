cmake_minimum_required(VERSION 3.9)
project(CPP2018)

set(CMAKE_CXX_STANDARD 11)

add_executable(CPP2018 main.cpp Pyramid_1.cpp Pyramid_2.cpp)
add_executable(Pyramid_1 Pyramid_1.cpp)
add_executable(Pyramid_2 Pyramid_2.cpp)