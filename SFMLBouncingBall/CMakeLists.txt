cmake_minimum_required(VERSION 3.24)
project(SFMLBouncingBall)

set(CMAKE_CXX_STANDARD 17)

add_executable(SFMLBouncingBall main.cpp Ball.cpp Ball.h)
target_link_libraries(SFMLBouncingBall sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)