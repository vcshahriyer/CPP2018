cmake_minimum_required(VERSION 3.9)
project(CPP2018)

set(CMAKE_CXX_STANDARD 11)

add_executable(CPP2018 main.cpp Pyramids/Pyramid_1.cpp Pyramids/Pyramid_2.cpp LightOJ/lightoj1001.cpp)
add_executable(Pyramid_1 Pyramids/Pyramid_1.cpp)
add_executable(Pyramid_2 Pyramids/Pyramid_2.cpp)
add_executable(Pyramid_3 Pyramids/Pyramid_3.cpp)
add_executable(lightoj1001 LightOJ/lightoj1001.cpp)