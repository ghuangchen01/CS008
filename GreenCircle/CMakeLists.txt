cmake_minimum_required(VERSION 3.24)
project(GreenCircle)

set(CMAKE_CXX_STANDARD 17)

add_executable(GreenCircle main.cpp)

target_link_libraries(GreenCircle sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)